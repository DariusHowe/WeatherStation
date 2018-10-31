#pragma once
#include "stdafx.h"
#include <string>
#include "WeatherMeasurement.h"
using namespace std;

class Stations
{
public:
	wMeasurement * history = new (nothrow) wMeasurement[MemPointer];
	wMeasurement meep;
	string station;
	char pickMe;
	int fullHouse = 0;
	int weatherIndex = 0; 
	int weatherCount = 0; 
	int weatherSize = 0;
	int MemPointer = weatherSize;
	void buildStations();
	void printStations(int, int, wMeasurement);
	Stations::Stations();
};