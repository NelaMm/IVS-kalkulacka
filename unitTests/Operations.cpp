#include "Operations.h"

void Operations::setOperand1(double Op1){
	operand1 = Op1;
}
void Operations::setOperand2(double Op2){
	operand2 = Op2;
}
void Operations::setOperation(string Operation){
	operation = Operation;
}
double Operations::calculate() {
	if(getOperation() == "*"){
		return multipli();
	}
	else if(getOperation() == "/"){
		return divide();
	}
	else if(getOperation() == "!"){
		return factorial();
	}
	else if(getOperation() == "**"){
		return power();
	}
	else if (getOperation() == "+"){
		return add();
	}
	else if (getOperation() == "-"){
		return substract();
	}
	else
	{
		throw "syntax error";
		return 0;
	}
}

void Operations::clear() {
	operand1 = 0;
	operand2 = 0;
	operation = "";

}
bool inOneOperandOperation(string operation){
	if(operation == "!")
		return true;
	else if(operation == "sqrt")
		return true;
	else 
		return false;
}
