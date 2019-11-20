#include "lab.h"


Lab::Lab()
{
	this->head = nullptr;
	this->tail = nullptr;
}

Lab::~Lab()
{	
	Bottle* current = nullptr;
	Bottle* next = nullptr;

	current = this->head;

	while(current != nullptr)
	{
		next = current->next;
		delete current;
		current = next;
	}
}

void Lab::insert(int ml, int operations)
{		
	Bottle* newBottle = new Bottle();
    newBottle->setMl(ml);
    newBottle->setOperations(operations);
    newBottle->next = nullptr;

     if(head == nullptr)
     {
     	head = newBottle;
       	tail = newBottle;
     }

     else
     {	
      	tail->next = newBottle;
        tail = newBottle;
     }
}

void Lab::remove(int ml)
{			
	Bottle* previous = nullptr;
	Bottle* current = nullptr;

	current = this->head;

	if (current->getMl() == ml)
		this->head = this->head->next;

	else
	{
		while (current->getMl() != ml)
		{
			previous = current;
			current = current->next;
		}

		previous->next = current->next;
	}

	if(current == this->tail)
		this->tail = previous;

		delete current;	
}

int Lab::measurement(int ml)
{
	Lab* measures = new Lab();
	int aux1 = 0;
	int aux2 = 0;
	int result = 0; 

	measures->insert(0, 0);

	Bottle* currentBottle = this->head;
	Bottle* currentMeasure = measures->head;

		while(aux1 != ml && aux2 != ml)
		{
			aux1 = currentMeasure->getMl() + currentBottle->getMl();
			aux2 = currentMeasure->getMl() - currentBottle->getMl();

			if(aux1 > 0)
				measures->insert(aux1, currentMeasure->getOperations() + 1);

			if(aux2 > 0)
				measures->insert(aux2, currentMeasure->getOperations() + 1);

			currentBottle = currentBottle->next;
			
			result = currentMeasure->getOperations() + 1;
			
			if(currentBottle == nullptr)
			{
				currentBottle = this->head;
				currentMeasure = currentMeasure->next;	
			}
		}
	
	delete measures;

	return result;
}


