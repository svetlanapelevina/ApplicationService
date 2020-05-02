#pragma once
#include "Service.h"
class MaintenanceService : public Service
{
private:
	string conclusion;
public:
	MaintenanceService(string name1, int cost1, string type1);
	void MaintenanceService::setConclusion(string type1);
	string MaintenanceService::getConclusion();
	string toString() override;
};

