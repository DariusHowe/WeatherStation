#include "stdafx.h"
#include <iostream>
#include <string>
#include <regex>
#include "WeatherMeasurement.h"
#include <sstream>
#include "Servers.h"
#include "WeatherStation.h"

using namespace std;

Servers *Servers::var = 0;
map<string, string> Servers::language;

Stations::Stations()
{
	cout << Servers::get("Name") << endl;
	getline(cin, station);

	cout << Servers::get("Size") << endl;
	cin >> MemPointer;
	weatherSize = MemPointer;
	if (MemPointer == 0)
		do
		{

			cout << Servers::get("SizeTwice") << endl;
			cin >> MemPointer;
			weatherSize = MemPointer;
		} while (MemPointer == 0);
		buildStations();
}

void Stations::buildStations()
{
		do
		{
			cout << Servers::get("Pane") << endl;
			cout << Servers::get("Reading") << endl;
			cout << Servers::get("Recent") << endl;
			cout << Servers::get("Total") << endl;
			cout << Servers::get("Bye") << endl;
			cin >> pickMe;
			switch (pickMe)
			{
			case '1': //Input of Weather functions from comments here
				if (weatherCount >= MemPointer)
				{
					cout << Servers::get("Filled") << endl;
					break;
				}
				else
				{
					//Change to include class name for WeatherMeasurement variable assigned earlier
					history[weatherIndex] = meep.setWeather();
					weatherIndex++;
					weatherCount++;
					fullHouse = 1;
				}
				break;
			case '2': //Printing of the Weather Data
				if (pickMe == '2')
				{
					if (fullHouse == 0)
					{
						cout << Servers::get(" Error") << endl;
						cout << Servers::get("Error2") << endl;
					}

					else
					{
						cout << Servers::get("Welcome1") << station << Servers::get("Welcome2") << endl;
						meep.printMeasurement(history[weatherIndex - 1]);
						cout << Servers::get("Werido") << endl;
					}
				}
				break;
			case '3': //Print Weather History
				if (pickMe == '3')

					for (int i = 0; i<(weatherCount <= MemPointer ? weatherCount : MemPointer); i++)
					{
						meep.printMeasurement(history[i]);
						cout << Servers::get("Werido") << endl;

					}



				break;


			case '4': //Exit
				if (pickMe == '4')
					cout << Servers::get("Farewell") << endl;
				cout << Servers::get("Werido") << endl;
				break;


			default: //Wrong answer
				cout << Servers::get("Bad") << endl;
				cout << Servers::get("Werido") << endl;
			}

		} while (pickMe != '4');
}

void printStations(int size, int wCount, wMeasurement * his)
{
	wMeasurement curr;
		int wIndex = wCount % size;
		int l = 1;

		for (int i = 0; i < (wCount > size ? size : wCount); i++)
		{
			int k = ((wCount - 1 - i) + size) % size;
			cout << "Weather Index Reading = " << wIndex << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "The report that is printing is the Number " << l++ << " entry." << endl;
			curr.printMeasurement(his[k]);
		}
}


