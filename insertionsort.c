//
//  insertionsort.c
//  Intro2Algo
//
//  Created by Amit Singhai on 4/7/13.
//  Copyright (c) 2013 Amit Singhai. All rights reserved.
//


void insertionSort(int inputArr[],int size){
    
    // element 2 to N
    for(int i=1;i<size;i++){
        
        int key = inputArr[i];
        
        //insert key at proper place
        int j = i-1;
        while(key< inputArr[j]){
            
            inputArr[j+1] = inputArr[j];
            j = j-1;
        }
        inputArr[j+1]= key;
    }
}
