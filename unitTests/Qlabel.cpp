#include "Qlabel.h"
using namespace std;
string Qlabel::text() {
	return value;
}
void Qlabel::text(const string& text) {
	value = text;
}