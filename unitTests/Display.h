
#ifndef DISPLAY_H
#define DISPLAY_H
	#include "Qlabel.h"
	
	class Display
	{
	public:
		Display();
		Display(Qlabel&);
		void setLabel(Qlabel&);
		double getValue();
		void setValue(const std::string&);
		void concat(const std::string&, bool=true);
		int length();
		void clear();
	private:
		Qlabel display;
		int maxLen = 0;
	};
#endif