//Upper.h for Programming Fundamentals 2 project.
//Authors (of this file):
// Todd Oakes
#include "Filter.h"
class UpperFilter : public Filter {

	public:
		//inheretence passing constructors
		UpperFilter() {	Filter(); }
		UpperFilter(ifstream& i, ofstream& o){ Filter(i, o); }

	//transforms a char to uppercase
	char transform(char c)
	{
		if (c > 96 && c < 123)
		{
			return (c - 32);
		}
		return c;
	}
};