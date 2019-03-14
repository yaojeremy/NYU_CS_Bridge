//
//  main.cpp
//  asterix_2.cpp
//
//  Created by Jeremy Yao on 14/02/2019.
//  Copyright © 2019 Jeremy Yao. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout<<"Enter n: ";
    cin>>n;
    
    int initialSpace = n-1;
    int asterix = n -initialSpace;
    
    for (int i=0; i< 2*n+1; i++)
    {
        for (int j = 0 ; j<=initialSpace; j++)
        {
            cout<<" ";
        }
        
        for (int j=1; j<asterix; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
        if (n>i){initialSpace--; asterix++; }
        else { initialSpace++; asterix--; }
    }
    
    return 0;
}
