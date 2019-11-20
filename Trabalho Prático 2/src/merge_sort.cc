#include "merge_sort.h"

void merge(Planet planets[], int low, int mid, int high)
{
    int i, k, j;
    int aux1 = mid - low + 1;
    int aux2 = high - mid;

    Planet planets1[aux1], planets2[aux2];

    for (i = 0; i < aux1; i++) 
        planets1[i] = planets[low + i]; 

    for (j = 0; j < aux2; j++) 
        planets2[j] = planets[mid + 1+ j]; 

    i = 0;
    j = 0;  
    k = low;  

    while (i < aux1 && j < aux2) 
    { 
        if (planets1[i].getTime() <= planets2[j].getTime()) 
        { 
            planets[k] = planets1[i]; 
            i++; 
        } 
        else
        { 
            planets[k] = planets2[j]; 
            j++; 
        } 
        k++; 
    } 

    while (i < aux1) 
    { 
        planets[k] = planets1[i]; 
        i++; 
        k++; 
    } 

    while (j < aux2) 
    { 
        planets[k] = planets2[j]; 
        j++; 
        k++; 
    } 
}

void mergeSort(Planet planets[], int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = low  + (high - low) / 2;
        mergeSort(planets, low, mid);
        mergeSort(planets, mid + 1, high);
        merge(planets, low, mid, high);
    }
}