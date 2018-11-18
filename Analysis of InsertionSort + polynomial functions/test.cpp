// test.cpp
//
// Created by Shaanan Curtis on 4/11/18.
// Copyright © 2018 SEC. All rights reserved.
//
// Timing insertion sort function
//

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

// disregards insertionSort.cpp implementation due to lack of header file
// need header file in order to link to main.cpp

//--------------------------------------
// insertionSort (function)
//
// Uses insertion sort algorithm
// to sort array
//
// Params: int array and array size
// I/O: none
// Return: void (nothing)
//--------------------------------------
void insertionSort(int A[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int cur = A[i];
        int j = i - 1;
        while ((j >= 0) && (A[j] > cur))
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = cur;
    }
}

//=========================================//

// MAIN PROGRAM //

//*****************************************//

int main()
{
 
    // stop watch >>
    clock_t start_time;
    clock_t end_time;
    double seconds, millisecs, microsecs;
    // stop watch <<
    
    
    // initialize the pseudo-random number generator from time-of-day
    srand ( (int) time (NULL) );
    
    int size;
    
    cout << "Enter array size: ";
    cin >> size;
    
    // dynamically allocate the array
    int * array;
    array = new int[size];
    
    // fill it with random integers
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 1000000000; // between 0 and 999,999,999
    }
    
    /*
    cout << "Before sort: -----------------------\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
    */
    start_time = clock();
    insertionSort(array, size);
    end_time = clock();
    /*
    cout << "After sort: -----------------------\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
    
    cout << "array = ";
    cout << array;
    */
    seconds = (end_time - start_time) / (double)CLOCKS_PER_SEC;
    millisecs = seconds*1000;
    microsecs = seconds*1000000;
    
    cout << "\n\n Timing:\n" << "\t" << seconds << " Sec\n" << "\t" << millisecs << " mSec\n" << "\t" << microsecs << " uSec\n";
    cout << endl;
    
    return 0;
}
