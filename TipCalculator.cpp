// S112-Zaldivar-Integer-Tip-Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author   Angel Zaldivar
// Goal     Calculate the amount of the tip to be given to a restaurant waitress

#include <iostream>
#include <cmath>
using namespace std;

//global variable

int main()
{
	// Variable declerations
	const double min_tip_percent = .1, max_tip_percent = .2;
	double tip = min_tip_percent, bill_total;
	//input
	cout << "Enter the bill total: ";
	cin >> bill_total;

	//Process - Output

	while (tip <= max_tip_percent)
	{
		cout << tip * 100 << "% Tip ... $" << round(tip * bill_total) << "\t Total ... $" << round(tip * bill_total) + bill_total << endl;
		tip = tip + .05;
	}
}

