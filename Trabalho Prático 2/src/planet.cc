#include "planet.h"

Planet::Planet()
{
	this->time = 0;
    this->month = 0;
    this->name[18] = {0};
}

Planet::Planet(int time, char name[], int nameSize)
{
	this->time = time;
    this->month = 0;
    for(int i = 0; i < nameSize; i++)
    	this->name[i] = name[i];
}

void Planet::setMonth(int month)
{
	this->month = month;
}
 
int Planet::getTime()
{
	return this->time;
}

int Planet::getMonth()
{
	return this->month;
}

char Planet::getName(int position)
{
	return this->name[position];
}