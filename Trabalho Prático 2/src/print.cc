#include "print.h"

void printList(Planet planets[], int numberOfPlanets, int nameSize)
{
    for(int i = 0; i < numberOfPlanets; i++)
    {
        std::cout << planets[i].getMonth()  << " ";

        for(int j = 0; j < nameSize; j++)
            std::cout << planets[i].getName(j);

        std::cout << " "<< planets[i].getTime() << std::endl;
    }
}