#pragma once
#include "Service.h"
#include <string>

using namespace std;
class TireService :
	public Service
{
protected:
	string diametr;
public:
	TireService(string name1, int cost1, string d);
	void setDiametr(string d);
	string getDiametr();
	string toString() override;
};