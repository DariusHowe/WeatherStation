// Project 10 Universe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <regex>
#include "WeatherMeasurement.h"
#include <sstream>
#include "Servers.h"
#include "WeatherStation.h"


using namespace std;


int main()
{
	int stationCount;
	int stationSize;
	int weatherPointer = stationSize;
	int fullStation;
	char pickIt;
	string newName;
	cout << "How many weather stations would you like to make?" << endl;
	cin >> weatherPointer;
	weatherPointer = stationSize;
	fullStation = stationSize;

	if (weatherPointer <= 0)
	{
		cout << "Thanks for starting up this program, have a nice day!" << endl;
		return 0;
	}

	else
	{
		cout << "Creating Weather Stations" << endl;
		do
		{
			cout << "Name your current weather station please" << endl;
			cin >> newName;
			cout << "What would you like to do first?" << endl;
			cout << "1: Create a Weather Station" << endl;
			cout << "2: Print Current Weather Station" << endl;
			cout << "3: Print All Created Weather Stations" << endl;
			cout << "4: Exit Program" << endl;
			cin >> pickIt;
			switch (pickIt)
			{
			case '1': //Creating a weather Station
				if (stationCount >= weatherPointer)
				{
					cout << "You ran out of space for this Station." << endl;
					break;
				}

				else
				{
				Stations();
				}
				break;
			case '2' : //Printing Current Weather Station
				if (pickIt == '2')
				{
					if (fullStation == 0)
					{
						cout << "No go no go!"<< endl;
						cout << "OOOOOWAHHHHHHH YOU CHEAAATINNNNNNGGGGGGGGGGG" << endl;
					}

					else
					{
						cout << ""<< endl;
					}
				}

			}
			
		
		} while ( weatherPointer <= fullStation);
	}
}


