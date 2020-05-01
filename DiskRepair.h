#pragma once
#include "Service.h"

class DiskRepair : public Service
{
private:
	string volume;
public:
	DiskRepair(string name1, int cost1, string volume1);
	void setVolume(string volume1);
	string getVolume();
	string toString() override;
};

