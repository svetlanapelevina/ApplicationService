#pragma once
#include <list>
#include "Service.h"

using namespace std;
ref class Source
{
public:
	static list<Service*> *AllServices = new list<Service*>();
	static void addElement(Service* Service);
	static void deleteElement(int index);
	static void changeName(int index, string name);
	static void changeCost(int index, string cost);
};

