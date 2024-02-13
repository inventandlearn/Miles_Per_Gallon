// MilesPerGallon.cpp 
// Daniel Alteon
// ET-505
// 10.08.17
// An interactive program that computes the number of miles per gallon a car gets. 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float gallon(100.000), miles(100.000), mpg(100.000);

	cout << "How many miles per gallon does your car get? " << endl;
	cin >> mpg;
	cout << "My car gets " << mpg << " miles per gallon. " << endl;
	cout << "What is the distance of your travel? " << endl;
	cin >>  miles;
	cout << "The distance of my travel is " << miles << " miles. " << endl;
	gallon = miles / mpg;
	cout << "You will need " << gallon << " gallons for your trip. " << endl;
	cout << endl;
    return 0;
}

/*

How many miles per gallon does your car get?
30.25
My car gets 30.25 miles per gallon.
What is the distance of your travel?
567.25
The distance of my travel is 567.25 miles.
You will need 18.7521 gallons for your trip.

*/