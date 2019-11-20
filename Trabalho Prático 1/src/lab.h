#ifndef LAB
#define LAB

#include "bottle.h"

class Lab
{	
	private:
		Bottle* head;
		Bottle* tail;

	public:
 
		Lab();

		~Lab();

		void insert(int ml, int operations);

		void remove(int ml);

		int measurement(int ml);
};

#endif