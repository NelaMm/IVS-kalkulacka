
#ifndef OPERATIONS_H
#define OPERATIONS_H
    #include "Qlabel.h"
	using namespace std;
	class Operations
	{
	public:
		double getOperand1();
		double getOperand2();
		string getOperation();
		void setOperand1(double);
		void setOperand2(double);
		void setOperation(string);
		void setOperands(double,double);
		double add();
		double subtract();
		double multipli();
		double divide();
		double factorial();
		double power2();
		double calculate();
		void show(double,Qlabel&);
		void clear();
	private:
		double operand1 = 0;
		double operand2 = 0;
		string operation="";
	};
#endif
