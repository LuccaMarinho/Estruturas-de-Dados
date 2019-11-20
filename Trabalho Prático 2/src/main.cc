#include <iostream>
#include <cstdio> 
#include "planet.h"
#include "decide_month.h"
#include "merge_sort.h"
#include "radix_sort.h"
#include "print.h"
#include "read.h"
#include "reorder.h"

int main() 
{
    int totalTime;
    int numberOfPlanets;
    int nameSize;
    
    scanf("%d %d %d", &totalTime, &numberOfPlanets, &nameSize);
        
    Planet* planets = new Planet[numberOfPlanets]();    
            
    read(planets, numberOfPlanets, nameSize);

    mergeSort(planets, 0, numberOfPlanets - 1);

    decideMonth(planets, numberOfPlanets, totalTime);

    reorder(planets, numberOfPlanets, nameSize);

    printList(planets, numberOfPlanets, nameSize);
   
   	delete[](planets);

    return 0;
}

