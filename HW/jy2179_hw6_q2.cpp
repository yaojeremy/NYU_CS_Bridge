//
//  main.cpp
//  jy2179_hw6_q2
//
//

#include <iostream>

using namespace std;
void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);
int main()
{
    printShiftedTriangle(3, 4, '+');
    cout<<endl;
    printPineTree(3, '*');
    return 0;
}

void printShiftedTriangle(int n, int m, char symbol){
    
    int initialSpace = n-1;
    int asterix = n -initialSpace;
    
    for (int i=0; i< n+1; i++)
    {
        for (int j = 0 ; j<=initialSpace + m; j++)
        {
            cout<<" ";
        }
        
        for (int j=1; j<asterix; j++)
        {
            cout<<symbol<<" ";
        }
        if (i<n){
            cout<<endl;
        }
        
        initialSpace--;
        asterix++;
 
    }
    
}

void printPineTree(int n, char symbol){
    int i;
    i=0;
    int k = n-1;
    
    while (i<n) {
        
        printShiftedTriangle(2+i,k,symbol);
        
        i++;
        k--;
        if (i==n){
            cout<<endl;
        }
    }
    
}
