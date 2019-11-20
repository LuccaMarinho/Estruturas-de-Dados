#ifndef PLANET
#define PLANET

#include <iostream>

class Planet 
{   
    private:
        int time;
        int month;
        char name[18];

    public:
        Planet();
        
        Planet(int time, char name[], int nameSize);

        void setMonth(int month);

        int getTime();

        int getMonth();

        char getName(int position);
};

#endif