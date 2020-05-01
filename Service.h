#pragma once
#include <string>
using namespace std;

class Service
{
protected:
	int number;
	string clientName;
	int cost;
public:
	Service();
	Service(string name1, int cost1);
	int getNumber();
	void setClientName(string name1);
	string getClientName();
	void setCost(int cost1);
	int getCost();
	virtual string toString();
};
