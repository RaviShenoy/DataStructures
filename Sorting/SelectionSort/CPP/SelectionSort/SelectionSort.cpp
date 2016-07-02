/*
	Selection Sort: Time complexity is O(n^2).
	Author: Ravindr R Shenoy

	You can use arrays instead of vectors here.

*/
#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <istream>
#include <string>
#include <array>
#include <sstream>
#include <vector>
using namespace std;

void swap(vector<int>::iterator& value, vector<int>::iterator& end) {
	int temp = *end;
	*end = *value;
	*value = temp;
}
void selectionsort(vector<int>& vInp) {
	for (auto itr = vInp.begin(); itr != vInp.end(); itr++) {
		auto minIndex = itr;
		for (auto itr2 = itr; itr2 != vInp.end(); itr2++) {
			if (*minIndex > *itr2) minIndex = itr2;
		}
		swap(minIndex, itr);
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

	selectionsort(vInput);
	cout << "Sorted Array:\n";
	for each (int var in vInput)
	{
		cout << var << ' ';
	}

    return 0;
}

