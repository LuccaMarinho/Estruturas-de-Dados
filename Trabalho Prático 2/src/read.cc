#include "read.h"

void read(Planet planets[], int numberOfPlanets, int nameSize)
{
    int i = 0;
    char name[nameSize];

    while(numberOfPlanets > i)
    {
        int timeSpent = 0;
        std::cin >> timeSpent;

        for(int j = 0; j < nameSize; j++) 
            std::cin >> name[j];
                
        planets[i] = Planet(timeSpent, name, nameSize);
    
        i++;
    }
}