// InsertionSort.cpp
//
// Created by Shaanan Curtis on 4/11/18.
// Copyright © 2018 SEC. All rights reserved.
//
// Implements insertion sort algorithm
//

// may be disregarded for now

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
