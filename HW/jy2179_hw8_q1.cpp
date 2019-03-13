//
//  main.cpp
//  jy2179_hw8_q1
//
//  Created by Jeremy Yao on 08/03/2019.
//  Copyright © 2019 Jeremy Yao. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int minInArray(int arr[], int arrSize);

int main() {
    int array_size = 20;

    int myarray[array_size];
    int min, input;
    string string_list;
 
    
    cout<<"Please enter 20 integers separated by a space: "<<endl;
    
        for (int j=0; j<array_size;j++ ){
            cin>>input;
            myarray[j]= input;

        }

    
    min = minInArray(myarray,array_size);
    int count;
    int index[array_size];
    
    count = 0;
    for (int i=0; i<array_size; i++) {
        if (min == myarray[i]){
            index[count] = i;
            count++;
        }
    }
    
    
    cout<<"The minimum value is "<<min<<", and it is located in the following indices: ";
    
    for (int j=0; j<count; j++) {
        cout << index[j]<<" ";
    }
    return 0;
}

int minInArray(int arr[], int arrSize){
    int min;
    min = arr[0];
    for (int i=0; i<arrSize; i++) {
        int temp;
        temp = arr[i];
        
        if (temp<min) {
            min = temp;
            
        }
        
    }
    
    return min;
}
