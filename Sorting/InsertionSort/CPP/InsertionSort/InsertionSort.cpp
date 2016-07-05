// InsertionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void insertionSort(vector<int>& vInp) {
	for (auto itr = vInp.begin() + 1; itr != vInp.end(); itr++) {
		auto itr2 = itr - 1;
		auto temp = itr;
		while (itr2 >= vInp.begin() && *temp < *itr2) {
			*(itr2 + 1) = *itr2;
			itr2--;
		}
		*(itr2 +1)= *temp;
	}
}

int main()
{
	cout << "Enter all the numbers in one line and then press ENTER\n";
	string strInput;
	vector<int> vInput;
	if (getline(cin, strInput)) {
		stringstream ssInput(strInput);
		int number;
		while (ssInput >> number) {
			vInput.push_back(number);
		}
	}

	insertionSort(vInput);
	cout << "Sorted Array:\n";
	for each (int var in vInput)
	{
		cout << var << ' ';
	}
    return 0;
}

