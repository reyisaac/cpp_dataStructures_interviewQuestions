// interviewQuestions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include "Solutions.h"

using namespace std;

Solutions sol;

int main()
{
	vector<int> numArray{ 1, 17, 12, 16, 2, 7, 11, 15 };
	int target = 9;
	sol.twosums(numArray, target);
	cout << "separator" << endl;
	sol.twosums_optimized(numArray, target);

	return 0; 
}

