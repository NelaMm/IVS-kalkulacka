#include "Operations.h"
#include "Mathf.h"

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
    if(operation == "*"){
        return Mathf::multipli(operand1,operand2);
	}
    else if(operation == "/"){
        return Mathf::divide(operand1,operand2);
	}
    else if(operation == "!"){
        return Mathf::factorial(operand1);
	}
    else if(operation  == "**"){
        return Mathf::power(operand1,operand2);
	}
    else if (operation  == "+"){
        return Mathf::add(operand1,operand2);
	}
    else if (operation == "-"){
        return Mathf::subtract(operand1,operand2);
	}
    else if (operation == "sqrt"){
        return Mathf::sqrt(operand1);
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
