#include "bottle.h"

Bottle::Bottle()
{
	this->ml = 0;
	this->operations = 0;
	this->next = nullptr;
}

Bottle::~Bottle(){}

void Bottle::setMl(int ml)
{
	this->ml = ml;
}

int Bottle::getMl()
{
	return this->ml;
}

void Bottle::setOperations(int operations)
{
	this->operations = operations;
}

int Bottle::getOperations()
{
	return this->operations;
}