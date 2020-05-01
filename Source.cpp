#include "Source.h"

void Source::addElement(Service* service)
{
	AllServices->push_back(service);
}

void Source::deleteElement(int index)
{
	for (int i = index; i < AllServices->size()-1; i++)
	{
		AllServices[i] = AllServices[i + 1];
	}
	AllServices->pop_back();
}

void  Source::changeName(int index, string name)
{
	int i = 0;
	for (Service* service : *AllServices)
	{
		if (i++ == index) service->setClientName(name);
	}
}

void  Source::changeCost(int index, string cost)
{
	int i = 0;
	for (Service* service : *AllServices)
	{
		if (i++ == index) service->setCost(atoi(cost.c_str()));
	}
}