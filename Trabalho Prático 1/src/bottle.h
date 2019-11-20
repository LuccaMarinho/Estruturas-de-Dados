#ifndef BOTTLE
#define BOTTLE

#include <iostream> 

class Bottle
{
	private:
		int ml;
		int operations;

	public:
		Bottle* next;

		Bottle();
		~Bottle();

		void setMl(int ml);
		void setOperations(int operations);

		int getMl();
		int getOperations();
};

#endif