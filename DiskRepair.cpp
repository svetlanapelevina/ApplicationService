#include "DiskRepair.h"

DiskRepair::DiskRepair(string name1, int cost1, string volume1) : Service(name1, cost1)
{
	this->number = 2;
	volume = volume1;
}

void DiskRepair::setVolume(string volume1) { volume = volume1; }

string DiskRepair::getVolume() { return volume; }

string DiskRepair::toString()
{
	return " " + Service::toString() + " " + this->getVolume() + " ";
}
