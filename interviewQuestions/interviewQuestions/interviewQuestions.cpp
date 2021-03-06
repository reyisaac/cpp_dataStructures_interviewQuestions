// interviewQuestions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include "Arrays.h"

using namespace std;

Arrays arr;

int main()
{
	//problem 1
	vector<int> numArray{ 1, 17, 12, 16, 2, 7, 11, 15 };
	int target = 9;
	arr.twosums(numArray, target);
	cout << "separator" << endl;
	arr.twosums_optimized(numArray, target);


	//problem 2
	vector<int> binary{ 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1 };
	cout << arr.maxConsecutivesOnes(binary) << endl;


	return 0; 
}

