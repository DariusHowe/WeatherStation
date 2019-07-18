// DariusWeatherStationPt2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int myStation()
{
	string station;
	cout << "What do you want to Name your brand new Weather Station?" << endl;
	getline(cin, station);
	cout << "Welcome to the " << station << " Weather Station on BlackBoi News!" << endl;
	return  -1;
}
int tempOutside()
{
	int temp;
	cout << "So whats the weather like outside in degrees?" << endl;
	cin >> temp;
	cout << "The current Temperature outside is " << temp << "Degrees Fharheit." << endl;
	return 0;
}

int windSpeed()
{
	int wspeed;
	cout << "How strong are the winds (Enter a number please)?";
	cin >> wspeed;
	cout << "The wind speed is " << wspeed << "!" << endl;
	return 0;
}

int windDirect()
{
	string wDirect;
	cout << "What direction is the wind Blowing?";
	cin >> wDirect;
	cout << "The wind Direction is " << wDirect << "!" << endl;
	return -1;
}


int main()
{

	int a = 1;
	int b = 2;
	int c = a + b;

	string station;
	cout << "What do you want to Name your brand new Weather Station?" << endl;
	getline(cin, station);
	//cout << "Welcome to the " << station << " Weather Station on BlackBoi News!" << endl;
	
	int temp;
	cout << "So whats the weather like outside in degrees?" << endl;
	cin >> temp;
	//cout << "The current Temperature outside is " << temp << "Degrees Fharheit." << endl;

	int wspeed;
	cout << "How strong are the winds (Enter a number please)?" << endl;
	cin >> wspeed;
	//cout << "The wind speed is " << wspeed << "!" << endl;

	string wDirect;
	cout << "What direction is the wind Blowing?" << endl;
	cin >> wDirect;

	//cout << "The wind Direction is " << wDirect << "!" << endl;

	//myStation();
	//tempOutside();
	//windSpeed();
	//windDirect();

	

	cout << "Welcome to the " << station << " Weather Station on BlackBoi News!" << endl;
	cout << "The current Temperature outside is " << temp << " Degrees Fharheit." << endl;
	cout << "The wind speed is " << wspeed << " mph!" << endl;
	cout << "The wind Direction is " << wDirect << " !" << endl;

	cout << "Thanks for tuning into the BlackBoi News network! Goodnight and stay safe" << endl;
	return 0;
}

