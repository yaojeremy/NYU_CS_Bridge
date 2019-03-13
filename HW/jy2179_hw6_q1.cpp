//
//  main.cpp
//  jy2179_hw6_q1
//
//

#include <iostream>
using namespace std;



int fib (int n);
//Fibonacci sequence with initialisation f1=f2=1

int main() {
    
    int num,index;
    cout<<"Please enter a positive integer: ";
    cin>>num;
    
    index = fib(num);
    cout<<index<<endl;
    
    return 0;
}

int fib (int n){
    //    initialisation
    int f1, f2, next;
    f1 = 1;
    f2 = 1;
    next = 0;
    
    if (n==1){
        return 1;
    }
    
    if (n==2){
        return 1;
    }
   
    for (int i=0; i<n-2; i++) {

        next = f1 + f2;
        f1 = f2;
        f2 = next;

    }
    return (next);
}
