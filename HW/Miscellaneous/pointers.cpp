//
//  main.cpp
//  pointers.cpp
//

#include <iostream>

using namespace std;

void resizeArray(int*& array, int currentSize, int newSize);

int main() {
    int arrSize = 10;
    int * arr = new int[arrSize];
    for (int i = 0; i<arrSize; i++) {
        arr[i] = i*10;
    }
    cout<<"Array before resizing"<<endl;
    
    for (int i = 0; i < arrSize; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int oneMore = 110;
    int newSize = arrSize*2;
    resizeArray(arr, arrSize, newSize);
    for (int i = 0; i < arrSize; i++) {
        arr[arrSize+i] = oneMore + i*10;
    }
    arrSize = newSize;
    
    
    cout<<"Array after resizing"<<endl;
    
    for (int i = 0; i < arrSize; i++) {
        cout<<arr[i]<<" ";
    }
    
    delete [] arr;

    return 0;
}
void resizeArray(int*& array, int currentSize, int newSize){
    
    int * temp = new int[newSize];
    for (int i = 0; i < currentSize; i++) {
        temp[i] =array[i];
    }
    delete [] array;
    array = temp;
    
}
