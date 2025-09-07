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
	double sqftPerGallon = 340, gallonsOfPaint, fenceHeight , fenceLength , paintNeeded, fenceSqft, twoCoatsSqft;

	cout << "Enter the height of the fence in feet ";
	cin >> fenceHeight;

	cout << "Enter the length of the fence in feet ";
	cin >> fenceLength;

	fenceSqft = fenceHeight * fenceLength;
	twoCoatsSqft = fenceSqft * 2;
	paintNeeded = twoCoatsSqft / sqftPerGallon;

	cout << "Approximately " << paintNeeded << " gallons of paint will be needed to paint two coats on a fence that is " << fenceHeight << " feet high and " << fenceLength << " feet long " << endl;
}
