#include "Service.h"
#include <iostream>
#include <sstream>

Service::Service()
{
}

Service::Service(string name1, int cost1)
	{
		clientName = name1;
		cost = cost1;
	}

void Service::setClientName(string name1) { clientName = name1; }

string Service::getClientName() { return clientName; }

void Service::setCost(int cost1) { cost = cost1; }

int Service::getCost() { return cost; }

int Service::getNumber() { return number; }

string Service::toString()
{
	ostringstream ss;
	ss << this->getNumber();
	ss << " " + this->getClientName() + " ";
	ss << this->getCost();;
	return ss.str();
}
