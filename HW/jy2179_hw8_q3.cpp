//
//  main.cpp
//  jy2179_hw8_q3
//
//  Created by Jeremy Yao on 08/03/2019.
//  Copyright © 2019 Jeremy Yao. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);
void printArray(int arr[], int arrSize);

int main() {
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;
    
    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);
    
    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);
    
    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);

    return 0;
}
void reverseArray(int arr[], int arrSize){
    int temp;
    int i,j;
    i=0;
    j= arrSize-1;
    while (i<j) {
        temp = arr[arrSize-i-1];
        arr[arrSize-i-1] = arr[i];
        arr[i] = temp;
        i++;
        j--;
    }
    
}

void splitParity(int arr[], int arrSize){
    int temp;
    int i,m;
    i=0;
    m=-1;
    while (i<arrSize) {
        if (arr[i]%2!=0){
            m++;
            temp = arr[i];
            arr[i] = arr[m];
            arr[m] = temp;

        }
        i++;
 
    
    }
    
    
}

void removeOdd(int arr[], int& arrSize){
    int temp;
    int i,m;
    i=0;
    m=-1;
    while (i<arrSize) {
        if (arr[i]%2==0){
            m++;
            temp = arr[i];
            arr[i] = arr[m];
            arr[m] = temp;
            
        }
        i++;
        
    }
    arrSize = m + 1;
    
}
void printArray(int arr[], int arrSize){
    int i;
    
    for (i = 0; i < arrSize; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
