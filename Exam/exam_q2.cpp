#include <iostream>
using namespace std;

int main() {
    
    int n;
    int initial_space, asterix;
    
    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;
    
    initial_space = n-1;
    asterix = n;
    
    for (int i = 0; i<n; i++)
    {
        for (int j = 1; j<= initial_space; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j<asterix; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        initial_space--;
        asterix+=2;
        
    }

    
    return 0;
}
