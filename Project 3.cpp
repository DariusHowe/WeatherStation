// DariusWeatherStationPt2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

/*
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
*/


int main()
{	
	string station;
	cout << "What do you want to Name your brand new Weather Station?" << endl;
	getline(cin, station);
	int temp;
	int wspeed;
	string wDirect;
	char pickMe;
	int fullHouse = 0;

	do 
	{
		cout << "What would you like to do first?!" << endl;
		cout << "1: Enter the Weather Reading" << endl;
		cout << "2: Print Weather" << endl;
		cout << "3: Exit" << endl;
		cin >> pickMe;

		switch (pickMe) 
		{
		case '1': //Input of Weather 
			cout << "So whats the weather like outside in degrees?" << endl;
			cin >> temp;
			cout << "How strong are the winds (Enter a number please)?" << endl;
			cin >> wspeed;
			cout << "What direction is the wind Blowing?" << endl;
			cin >> wDirect;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			fullHouse = 1;
			break;

		case '2': //Printing of the Weather Data
			if(fullHouse ==0)
			{
				cout << "No go no go! Gotta" << endl;
				cout << "OOOOOWAHHHHHHH YOU CHEAAATINNNNNNGGGGGGGGGGG" << endl;
			}

			else
			{
				cout << "Welcome to the " << station << " Weather Station on the BlackBoi Network!" << endl;
				cout << "It is currently " << temp << " degrees outside." << endl;
				cout << "The wind speed is " << wspeed << " mph!" << endl;
				cout << "The wind Direction is " << wDirect << " !" << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			}

			break;

		case '3': //Exit
			if (pickMe == 3)
			cout << "Thanks for tuning into the BlackBoi News network! Goodnight and stay safe " << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			break;

		default: //Wrong answer 
			cout << "Not today my guy... Try that again please!" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
	
	} while (pickMe != '3');
return 0;
}

/*


//Make sure you do all four options for each case
if (firstPick == 1)
{
int temp;
cout << "So whats the weather like outside in degrees?" << endl;
cin >> temp;

int secondPick1;
cout << "Next up is what?" << endl;
cout << "Option 2: Enter Wind Speed" << endl;
cout << "Option 3: Enter Wind Direction" << endl;
cin >> secondPick1;

if (secondPick1 == 2)
{
int wspeed;
cout << "How strong are the winds (Enter a number please)?" << endl;
cin >> wspeed;

}

else
{
string wDirect;
cout << "What direction is the wind Blowing?" << endl;
cin >> wDirect;
}
}
//Make sure you do all four options for each case
else if (firstPick == 2)
{
int wspeed;
cout << "How strong are the winds (Enter a number please)?" << endl;
cin >> wspeed;
}

//Make sure you do all four options for each case
else if (firstPick == 3)
{
string wDirect;
cout << "What direction is the wind Blowing?" << endl;
cin >> wDirect;

int secondPick3;
cout << "Next up is what?" << endl;
cout << "Option 1: Enter Temperature" << endl;
cout << "Option 2: Enter Wind Speed" << endl;
cin >> secondPick3;

if (secondPick3 == 1)
{
int temp;
cout << "So whats the weather like outside in degrees?" << endl;
cin >> temp;
}

else
{
int wspeed;
cout << "How strong are the winds (Enter a number please)?" << endl;
cin >> wspeed;
}
}
//cout << "Welcome to the " << station << " Weather Station on BlackBoi News!" << endl;

//int temp;
//cout << "So whats the weather like outside in degrees?" << endl;
//cin >> temp;
//cout << "The current Temperature outside is " << temp << "Degrees Fharheit." << endl;

//int wspeed;
//cout << "How strong are the winds (Enter a number please)?" << endl;
//cin >> wspeed;
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


*/
