//
//  quicksort.c
//  Intro2Algo
//
//  Created by Amit Singhai on 4/7/13.
//  Copyright (c) 2013 Amit Singhai. All rights reserved.
//



int findPiot(int inputArr[], int p , int r){

    // key is pivot value
    int key = inputArr[r];
    
    int j = p-1;
    
    for (int i = p; i <= r-1; i++) {
        //increment j
        if( inputArr[i] <= key ){
            j++;
            int t = inputArr[i];
            inputArr[i] = inputArr[j];
            inputArr[j] = t;
        }
        
    }
    
    inputArr[r] = inputArr[j+1];
    inputArr[j+1] = key;
    return j+1;

}

void quickSort(int inputArr[],int start, int end){
    
    if (start < end) {
        int pivot = findPiot(inputArr,start,end);
        quickSort(inputArr, start,pivot-1);
        quickSort(inputArr, pivot+1,end);
    }
 
    
}
