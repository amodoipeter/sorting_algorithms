#include<stdio.h> // include stdio.h library
#define MAX 5
#include "sort.h"
#include <string.h>

/*
 *  bubble_sort() takes an array and sorts it
 *  in the ascending order
 */

void bubble_sort(int *arr, size_t size)
{
    int tmp,  // temporary variable to hold one of the values while swapping
        is_swapped; // variable to indicate whether we have made any swaps during the passthrough

    for(int i = 0; i < size; i++)
    {
        // re-initialize is_swapped to 0 after every passthrough       
        is_swapped = 0;  

        for(int n = 0; n < size - 1 - i; n++)
        {            
            if(arr[n] > arr[n+1]) // compare adjacent elements
            {
                // swap adjacent elements
                tmp = arr[n];
                arr[n] = arr[n+1];
                arr[n+1] = tmp;

                // set is_swapped to 1, to indicate
                // that we have made at least one 
                // swap during the passthrough
                is_swapped = 1;               
            }     
        }        

        // if no swaps are made in the last passthrough,
        // exit the outer for loop

        if (!is_swapped)
        {
            break;
        }
    }        
}
