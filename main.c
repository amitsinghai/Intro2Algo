//
//  main.c
//  Intro2Algo
//
//  Created by Amit Singhai on 4/6/13.
//  Copyright (c) 2013 Amit Singhai. All rights reserved.
//

#include <stdio.h>
#include "math.h"


#define MAX_ARRAY_SIZE 100


extern void insertionSort(int inputArr[],int size);
extern void selectionSort(int inputArr[],int size);
extern void bubbleSort(int inputArr[],int size);
//extern void mergeSort(int inputArr[],int size);
extern void quickSort(int inputArr[],int start, int end);
//extern void heapSort(int inputArr[MAX_ARRAY_SIZE]);
//extern void redixSort(int inputArr[MAX_ARRAY_SIZE]);
//extern void countSort(int inputArr[MAX_ARRAY_SIZE]);

int array[MAX_ARRAY_SIZE];

void getInputData(){
    
    srand(time(NULL));
    
    for (int i=0; i<MAX_ARRAY_SIZE; i++) {
        array[i] = rand()%MAX_ARRAY_SIZE;
    }
    
}

void printArray(){

    // insert code here...
    for (int i=0; i<MAX_ARRAY_SIZE; i++) {
        printf(" %d ",array[i]);
    }

}

int verifyAccending(){

    int verifed = 1;
    
    for (int i=0; i<MAX_ARRAY_SIZE-1; i++) {
        if (array[i] < array[i+1]) {
            continue;
        }else{
            verifed = 0;
            break;
        }
    }
    return verifed;
}


void testInsertionSort(){
    printf("\n every element is compared with previous all, and inserted at proper place");
    getInputData();
    printf("\n ---INPUT DATA ---  \n ");
    printArray();
    insertionSort(array, MAX_ARRAY_SIZE);
    printf("\n ---OUTPUT DATA---  \n ");
    printArray();
}

void testSelectionSort(){
    printf("\n 0th element is compared with all, and swapped if higher, than 1st, 2nd ...N");
    getInputData();
    printf("\n ---INPUT DATA ---  \n ");
    printArray();
    selectionSort(array, MAX_ARRAY_SIZE);
    printf("\n ---OUTPUT DATA---  \n ");
    printArray();
}

void testBubbleSort(){
    printf("\n i th element is compared with i+1 th , and swapped if higher");
    printf("\n ---INPUT DATA ---  \n ");
    getInputData();
    printArray();
    bubbleSort(array, MAX_ARRAY_SIZE);
    printf("\n ---OUTPUT DATA---  \n ");
    printArray();
}

void testQuickSort(){
    printf("\n divide into left, pivot, right ");
    printf("\n ---INPUT DATA ---  \n ");
    getInputData();
    printArray();
    quickSort(array, 0, MAX_ARRAY_SIZE-1);
    printf("\n ---OUTPUT DATA---  \n ");
    printArray();
}



int main(int argc, const char * argv[])
{    
    //testInsertionSort();
    //testSelectionSort();
    testBubbleSort();
    //testQuickSort();
    return 0;
}


