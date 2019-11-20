#include "radix_sort.h"

void radixSort(Planet planets[], int numberOfPlanets, int nameSize)
{
    Planet output[numberOfPlanets];

    for(int i = nameSize - 1; i >= 0; i--)
    {
        int count[27] = {0};

        for(int j = 0; j < numberOfPlanets; j++)
            count[static_cast<int>(planets[j].getName(i)) - 96]++;

        for(int j = 2; j < 26; j++)
            count[j] += count[j - 1];

        for(int j = 0; j < numberOfPlanets; j++)
            output[count[static_cast<int>(planets[j].getName(i)) - 97]++] = planets[j];

        for(int j = 0; j < numberOfPlanets; j++)
            planets[j] = output[j];
    }      
}