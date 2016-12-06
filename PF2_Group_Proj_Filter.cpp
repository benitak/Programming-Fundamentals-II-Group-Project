// PF2_Group_Proj_Filter.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
#include "Filter.h"
#include "Upper.h"


using namespace std;
int main()
{
	//UpperFilter testFilter = UpperFilter();
	//testFilter.doFilter();
	ifstream i = ifstream("input.txt");
	ofstream o = ofstream("output.txt");
	UpperFilter testFilter2 = UpperFilter(i,o);
	testFilter2.doFilter();
    return 0;
}

