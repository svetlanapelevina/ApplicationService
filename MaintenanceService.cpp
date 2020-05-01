#include "MaintenanceService.h"

MaintenanceService::MaintenanceService(string name1, int cost1,string type1) : Service(name1, cost1)
{
	this->number = 3;
	conclusion = type1;
}

void MaintenanceService::setConclusion(string type1) { conclusion = type1; }

string MaintenanceService::getConclusion() { return conclusion; }

string MaintenanceService::toString()
{
	return " " + Service::toString() + " " + this->getConclusion() + " ";
}
