//
//  jy2179_hw6_q4
//

#include <iostream>
#include <cmath>

using namespace std;

void printDivisors(int n);

int main() {
    int number;
    cout<<"Please enter a positive integer >= 2: ";
    cin>>number;
    
    printDivisors(number);

    return 0;
}


void printDivisors(int n)
{
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            cout<<i<<" ";
        }
        
    }
    
    for (int k= sqrt(n) - 1; k>0; k--)
    {
        if (n%k == 0)
        {
            cout<<n/k<<" ";
        }
        
    }
    
}

