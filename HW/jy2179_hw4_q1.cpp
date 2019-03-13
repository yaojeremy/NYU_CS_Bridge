//
//  jy2179_hw4_q1
//
//

#include <iostream>
using namespace std;

int main()
{
    int n; // number of consecutive even integers that we want
    int count,evenInt, evenInt2;
    
    cout<<"Please enter a positive integer: ";
    cin>>n;
    
    evenInt = 0;
    
    for (count = 0; count< n; count++)
    {
        evenInt +=2;
        cout<<evenInt<<endl;
    }
    cout<<endl;
    
     //-----------------------------------------
    // while version
   //__________________________________________
    
     count = 0; // Initialisation
    
     evenInt2 = 0;
     while (count<n)
     {
         evenInt2 +=2;
         count++;
         
         cout<<evenInt2<<endl;
         
         
     }
     
     
    
    return 0;

}
