#ifndef QLABEL_H
#define QLABEL_H
	#include <string>
	class Qlabel
	{
	public:
		std::string text();
		void text(const std::string& text);
	private:
		std::string value;
	};
#endif
