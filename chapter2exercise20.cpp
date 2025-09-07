/*
* File: chapter2exercise20
* Programmer: Carter Pride
* Date: 9/25
* Purpose: Write a program to determine and report approximately how many gallons of paint will be needed to paint two coats on a wooden fence that is 6 feet high and 100 feet long
*/

#include <iostream>
using namespace std;

int main()
{
	int sqftPerGallon = 340, gallonsOfPaint, fenceHeight = 7, fenceLength = 100, paintNeeded, fenceSqft, twoCoatsSqft;

	fenceSqft = fenceHeight * fenceLength;
	twoCoatsSqft = fenceSqft * 2;
	paintNeeded = twoCoatsSqft / sqftPerGallon;

	cout << "Approximately " << paintNeeded << " gallons of paint will be needed to paint two coats on a fence that is 6x100ft. " << endl;
}
