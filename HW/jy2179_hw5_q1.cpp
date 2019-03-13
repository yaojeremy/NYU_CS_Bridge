//
//  jy2179_hw5_q1
//

#include <iostream>
using namespace std;

int main()
{
    
    int n, num,initial_space;
    int countDigits;
   
    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;
    num = n;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cout<<j*i;
            int a;
            a = j*i;
            countDigits=0;
            while(a!=0)
            {
                a = a/10;
                countDigits++;
            }
            
            initial_space = 5 - countDigits;
            for (int k = 0; k <= initial_space; k++)
            {
                std::cout << " ";
            }
        }
            cout<<endl;
    }
    return 0;
}
