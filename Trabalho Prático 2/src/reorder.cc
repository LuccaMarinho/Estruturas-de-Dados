#include "reorder.h"

void reorder(Planet planets[], int numberOfPlanets, int nameSize)
{
    int currentPosition = 0;
    int planetsInCurrentMonth = 0;
    int month = 1;
    int aux1 = 0;
    int aux2 = 0;
    int aux3 = 0;

    int currentMonth = planets[numberOfPlanets - 1].getMonth();
    
    while(currentMonth != 0)
    {
        aux1 = currentPosition;

        for(; month == planets[currentPosition].getMonth(); currentPosition++)
            planetsInCurrentMonth++;

        month++;
        currentMonth--;
        aux2 = aux1;

        Planet temp[planetsInCurrentMonth];
        aux3 = 0;

        for(; aux1 < currentPosition; aux1++, aux3++)
            temp[aux3] = planets[aux1];

        radixSort(temp, planetsInCurrentMonth, nameSize);

        aux1 = aux2; 

        for(; aux2 < currentPosition; aux2++)
            planets[aux2] = temp[aux2 - aux1];

        planetsInCurrentMonth = 0;
    }
}