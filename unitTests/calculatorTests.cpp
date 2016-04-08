// calculatorTests.cpp : Defines the entry point for the console application.
//

#include "Qlabel.h"
#include "Display.h"
#include "Errors.h"
#include "Operations.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Display tests", "[Display]") {
	Qlabel label;
	Display disp(label);

	SECTION("get and Set value") {
		disp.setValue("-1000");
		REQUIRE(disp.getValue() == -1000);//disp.setValue("-1000");
		disp.setValue("10");
		REQUIRE(disp.getValue() == 10);//disp.setValue("10");
		disp.setValue("1000");
		REQUIRE(disp.getValue() == 1000);//disp.setValue("1000");
		disp.setValue("1000000000");
		REQUIRE(disp.getValue() == 0);//disp.setValue("1000000000");
		disp.setValue("-100000000");
		REQUIRE(disp.getValue() == 100000000);//disp.setValue("-100000000");
		disp.setValue("ERROR");
		bool error=false;
		try{
			disp.getValue();
		}
		catch(int e){
			error = true;
		}
		if(!error){
			REQUIRE(!("getValue nevytvorilo vyjimku pri display nastavenem na string"));
		}
		
		SECTION("length") {
			disp.setValue("10");
			REQUIRE(disp.length() == 2);
			disp.setValue("999999999999999");//disp.setValue("10");,REQUIRE(disp.length() == 2);
			REQUIRE(disp.length() == 9);
			disp.setValue("");
			REQUIRE(disp.length() == 0);//REQUIRE(disp.length() == 9);,disp.setValue("");
			
		}
		SECTION("concat") {
			disp.setValue("1000");
			disp.concat("1");
			REQUIRE(disp.getValue() == 10001);//disp.setValue("1000");,disp.concat("1");
			disp.setValue("999999999999999999");
			disp.concat("1");
			REQUIRE(disp.getValue() == 999999991);//disp.setValue("999999999999999999");,disp.concat("1");
			disp.setValue("1000");
			disp.concat("1",true);
			REQUIRE(disp.getValue() == 11000);//disp.setValue("1000");,disp.concat("1",true);
		}
		SECTION("clear") {

		}
	}
	SECTION("init") {
		REQUIRE(disp.getValue() == 0);
		REQUIRE(disp.length() == 1);
	}
}

TEST_CASE("Operations", "[Display]") {
	Operations op;

	SECTION("setters,getters") {
		op.setOperand1(100);
		REQUIRE(op.getOperand1()==100);
		op.setOperand2(200);
		REQUIRE(op.getOperand2()==200);
		op.setOperands(500,1000);
		REQUIRE(op.getOperand1()==500);
		REQUIRE(op.getOperand2()==1000);
		op.setOperation("+");
		REQUIRE(op.getOperation()=="+");
		bool err=false;
		try{
			op.setOperation("+a");
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("chyba v setOperation, test: op.setOperation(\"+a\")(nevytvorena vyjimka)"));
		}
	}
	SECTION("add") {
		op.setOperands(100,200);
		op.setOperation("+");
		REQUIRE(op.calculate()==300);
	}
	SECTION("subtract") {
		op.setOperands(100,200);
		op.setOperation("-");
		REQUIRE(op.calculate()==-100);
	}
	SECTION("divide") {
		op.setOperands(100,200);
		op.setOperation("/");
		REQUIRE(op.calculate()==0.5);
	}
	SECTION("multipli") {
		op.setOperands(0.5,0.6);
		op.setOperation("*");
		REQUIRE(op.calculate()==0.3);
	}
	SECTION("factorial") {
		op.setOperands(10,0.6);
		op.setOperation("!");
		REQUIRE(op.calculate()==3628800);
	}
	SECTION("power2") {
		op.setOperands(10,0);
		op.setOperation("p2");
		REQUIRE(op.calculate()==100);
	}
	SECTION("calculate"){
		op.setOperands(10,0);
		op.setOperation("foo");
		bool err=false;
		try{
			op.calculate();
		}
		catch(string e){
			err = true;
			Error err;
			REQUIRE(e==err.getSyntax());
		}
		if(!err){
			REQUIRE(!("chyba v calculate, test: op.setOperation(\"asdf\");(nevytvorena vyjimka)"));
		}
	}
	SECTION("clear"){
		op.setOperands(10,0);
		op.setOperation("p2");
		op.clear();
		REQUIRE(op.getOperand1()==0);
		REQUIRE(op.getOperand2()==0);
		REQUIRE(op.getOperation()=="");
	}
}

TEST_CASE("Errors tests", "[Errors]") {
	Error error;
	SECTION("checkDivide"){
		bool err=false;
		try{
			error.checkDivide(100,100);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o deleni, test: errors.checkDivide(100,100)"));
		}
		err=false;
		try{
			error.checkDivide(100,-100);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o deleni, test: errors.checkDivide(100,-100)"));
		}
		err=false;
		try{
			error.checkDivide(100,0);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("chyba v erroru o deleni, test: errors.checkDivide(100,0)"));
		}
	}
	SECTION("checkAdd"){
		bool err=false;
		try{
			error.checkAdd(100,100,300);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o nasobeni, test: errors.checkAdd(100,100,300)"));
		}
		err=false;
		try{
			error.checkAdd(-100,-100,200);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o nasobeni, test: errors.checkAdd(-100,-100,200)"));
		}
		err=false;
		try{
			error.checkAdd(100,100,100);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("chyba v erroru o nasobeni, test: errors.checkAdd(100,100,100)"));
		}
		err=false;
		try{
			error.checkAdd(-100,-100,100);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("chyba v erroru o nasobeni, test: errors.checkAdd(-100,-100,100)"));
		}
		err=false;
		try{
			error.checkAdd(-100,-100,-300);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o nasobeni, test: errors.checkAdd(-100,-100,-300)"));
		}
	}
	SECTION("checkSubtract"){
		bool err=false;
		try{
			error.checkSubtract(10,10,300);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o odcitani, test: errors.checkSubtract(10,10,300)"));
		}
		err=false;
		try{
			error.checkSubtract(-10,-10,100);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o odcitani, test: errors.checkSubtract(-10,-10,100)"));
		}
		err=false;
		try{
			error.checkSubtract(1000,100,800);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("chyba v erroru o odcitani, test: errors.checkSubtract(1000,100,800)"));
		}
		err=false;
		try{
			error.checkSubtract(-100,100,100);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("chyba v erroru o odcitani, test: errors.checkSubtract(-100,100,100)"));
		}
		err=false;
		try{
			error.checkSubtract(-10,-10,-300);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o odcitani, test: errors.checkSubtract(-10,-10,-300)"));
		}
	}
	SECTION("checkMultipli"){
		bool err=false;
		try{
			error.checkMultipli(10,10,300);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o nasobeni, test: errors.checkMultipli(10,10,300)"));
		}
		err=false;
		try{
			error.checkMultipli(-10,-10,100);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o nasobeni, test: errors.checkMultipli(-10,-10,100)"));
		}
		err=false;
		try{
			error.checkMultipli(100,100,100);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("chyba v erroru o nasobeni, test: errors.checkMultipli(100,100,100)"));
		}
		err=false;
		try{
			error.checkMultipli(-100,100,100);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("chyba v erroru o nasobeni, test: errors.checkMultipli(-100,100,100)"));
		}
		err=false;
		try{
			error.checkMultipli(-10,-10,-300);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o nasobeni, test: errors.checkMultipli(-10,-10,-300)"));
		}
	}
	SECTION("checkFactorial"){
		bool err=false;
		err=false;
		try{
			error.checkFactorial(3,10);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o faktorialu, test: errors.checkFactorial(3,10)"));
		}
		err=false;
		try{
			error.checkFactorial(5,10);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("chyba v erroru o faktorialu, test: errors.checkFactorial(5,10)"));
		}
		try{
			error.checkFactorial(-1,10);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("chyba v erroru o faktorialu, test: errors.checkFactorial(-1,10)"));
		}
	}
	SECTION("checkPower2"){
		bool err=false;
		err=false;
		try{
			error.checkPower2(3,10);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o mocnine, test: errors.checkPower2(3,10)"));
		}
		err=false;
		try{
			error.checkPower2(-3,10);
		}
		catch(string e){
			err = true;
		}
		if(err){
			REQUIRE(!("chyba v erroru o mocnine, test: errors.checkPower2(-3,10)"));
		}
		err=false;
		try{
			error.checkPower2(4,10);
		}
		catch(string e){
			err = true;
		}
		if(!err){
			REQUIRE(!("chyba v erroru o mocnine, test: errors.checkPower2(3410)"));
		}
	}
}


/*
int main() {
	
	return 0;
}*/