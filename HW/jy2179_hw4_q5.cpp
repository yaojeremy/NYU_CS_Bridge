//
//  jy2179_hw4_q5
//
//

#include <iostream>
using namespace std;


int main()
{
    int n, num_asterix, counter,dummy_counter,num_space, n_memory;
    string asterix;
    
    cout<<"Please enter a positive integer: ";
    cin>>n;
    
    counter = 0;
    dummy_counter =0;
    num_space = 0;
    n_memory = n;
    
    while (n>0)
    {
        num_asterix = 1 + 2*(n-1);
        while (num_asterix>0)
        {
            asterix += "*";
            num_asterix--;
            
        }
        
        cout<<asterix<<endl;
        num_space ++;
        dummy_counter = num_space;
        asterix = "";
        while (dummy_counter>0)
        {
            asterix += " ";
            dummy_counter--;
        }
        
        n -= 1;
    }
    
    for (n=1; n<n_memory+1; n++)
    {
        num_asterix = 1 + 2*(n-1);
        
        num_space--;
        dummy_counter = num_space;
        asterix = "";
        while (dummy_counter>0)
        {
            asterix += " ";
            dummy_counter--;
        }
        
        while (num_asterix>0)
        {
            asterix += "*";
            num_asterix--;
        }
        cout<<asterix<<endl;
        
        
    }
    
    return 0;
}
