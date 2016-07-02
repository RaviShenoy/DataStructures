// BubbleSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <istream>
#include <string>
#include <array>
#include <sstream>
#include <vector>
using namespace std;

void swap(vector<int>::iterator itr) {
	int temp = *(itr - 1);
	*(itr - 1) = *itr;
	*itr = temp;
}

void bubblesort(vector<int>& vInts) {
	bool bSwaped = true;
	while (bSwaped) {
		bSwaped = false;
		
		for (auto it = vInts.begin(); it != vInts.end(); it++) {
			if (it == vInts.begin()) continue;

			if (*(it - 1) > *(it)) {
				swap(it);
				bSwaped = true;
			}
		}
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

	bubblesort(vInput);
	cout << "Sorted Array:\n";
	for each (int var in vInput)
	{
		cout << var << ' ';
	}
	
    return 0;
}

