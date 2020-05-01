#include "TireService.h"

TireService::TireService(string name1, int cost1, string components1) : Service(name1, cost1)
{
	this->number = 1;
	diametr = components1;
}

void TireService::setDiametr(string components1) { diametr = components1; }

string TireService::getDiametr() { return diametr; }

string TireService::toString()
{
	return " " + Service::toString() + " " + this->getDiametr() + " ";
}