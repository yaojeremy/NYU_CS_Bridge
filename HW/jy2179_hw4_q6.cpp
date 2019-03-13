//
//  jy2179_hw4_q6
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int integer,n,divten, pairnum;
    int num_digits, pair_count, odd_count,divten_copy;

    
    
    cout<<"Please enter a positive integer: ";
    cin>>integer;
    
    n = 0; //initialisation
    num_digits = 0;
    pair_count = 0;
    odd_count = 0;

    
    
    
    for (int i=0; i<integer; i+=2)
    {
    
        divten = i;
        
        if (divten < 10)
            cout<<divten<<endl;
        
        else //(divten>=10)
        {
            divten_copy = divten;
            num_digits = 0;
            while (divten>0)
            {
                divten /=10;
                num_digits++;
                
            }

      
            pair_count=0;
            odd_count=0;
            
            while (divten_copy>0) // decomposing the digits and see if they are pair or not
            {
                divten_copy /=10;
                
                
                pairnum = divten_copy;

                if (pairnum%2==0)
                {
                    pair_count++;
                    
                }
                else if (pairnum%2>0)
                {
                    odd_count++;
                }
                
            }
                
      
            if (pair_count>odd_count) // we only print if the nb of pairs is higher than odds
            {
                cout<<i<<endl;
            }
            
        }
            
       
    }
    return 0;
}
