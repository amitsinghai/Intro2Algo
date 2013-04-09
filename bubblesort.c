//
//  bubblesort.c
//  Intro2Algo
//
//  Created by Amit Singhai on 4/7/13.
//  Copyright (c) 2013 Amit Singhai. All rights reserved.
//


void bubbleSort(int inputArr[],int size){

    for (int i=0; i< size; i++) {
        for (int j=0; j<size-i-1; j++) {
            if (inputArr[j] > inputArr[j+1]) {
                int t= inputArr[j];
                inputArr[j]=inputArr[j+1];
                inputArr[j+1]=t;
            }
        }
    }
}
