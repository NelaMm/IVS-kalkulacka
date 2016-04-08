
#ifndef ERRORS_H
#define ERRORS_H
	#include <string>
	using namespace std;

	class Error
	{
	public:
		void checkDivide(double,double);
		void checkAdd(double, double,double);
		void checkSubtract(double, double, double);
		void checkMultipli(double, double, double);
		void checkFactorial(double, double);
		void checkPower2(double, double);
		string getSyntax();
		string getOverflow();
	private:
		string overflow = "Overflow";
		string syntax = "Error";
	};
#endif




