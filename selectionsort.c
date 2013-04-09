//
//  selectionsort.c
//  Intro2Algo
//
//  Created by Amit Singhai on 4/7/13.
//  Copyright (c) 2013 Amit Singhai. All rights reserved.
//

void selectionSort(int inputArr[],int size){
    for (int i=0; i<size; i++) {
        for (int j=i+1; j<size; j++) {
            if (inputArr[i]>inputArr[j]) {
                int t = inputArr[i];
                inputArr[i]=inputArr[j];
                inputArr[j] = t;
            }
        }
    }
}
