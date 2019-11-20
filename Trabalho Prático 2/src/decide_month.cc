#include "decide_month.h"

void decideMonth(Planet planets[], int numberOfPlanets, int totalTime)
{
    int maxTimeSpent = 0;

    for(int i = 0, month = 1; i < numberOfPlanets; i++)
    {
        maxTimeSpent += planets[i].getTime();

        if(maxTimeSpent > totalTime)
        {
            maxTimeSpent = planets[i].getTime();
            month++;
        }

        planets[i].setMonth(month);
    }
}