//Filter.h for Programming Fundamentals 2 project.
//Authors (of this file):
// Todd Oakes

#pragma once
#ifndef FILTER_H
#define FILTER_H
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class Filter {
private:
	ifstream in;
	ofstream out;
public:
	Filter() {
		istream& in = cin;
		ostream& out = cout;
	}
	Filter(ifstream& i, ofstream& o)
	{
		ifstream& in = i;
		ofstream& out = o;
	}

	void doFilter() {
		string i;
		getline(in, i);
		while (i.length() != '\n') // not at end-of-line.  could use work, this condition may be falsely met by files with multiple linebreaks (is .eof safe to check on cin?  idk) -TO
		{
			while (i.at(0) != '\n') // not at end-of-line
			{
				out.put(transform(i.at(0))); //transform the first char and print it
				i = i.substr(1); // move the pointer up one
			}
			if (!in.eof) //not at end-of-file
			{
				getline(in, i); // get next line
				//will loop if next input contains more than endline char.
			}
			else
			{
				return; // end-of-file, stop filtering
			}

		}
	};
	virtual char transform(char ch)
	{
		return ch; //dummy function
	};
};

#endif // !Filter
