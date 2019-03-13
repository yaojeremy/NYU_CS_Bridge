//
//  jy2179_hw3_q3
//
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{   double a, b, c;
    double b2,delta;
    string status;
    
    
    cout<<"Please enter value of a: ";
    cin>>a;
    
    cout<<"Please enter value of b: ";
    cin>>b;
    
    cout<<"Please enter value of c: ";
    cin>>c;
    
    
    b2= b*b;
    delta = b2 -4*a*c;
    
    if ((a==0) && (b==0) && (c==0))
    {
        status = "an infinite number of solutions";
        cout<<"This equation has"<<status<<endl;
    }
    
    else if (delta>0)
    {
        double solution1, solution2;
        solution1 = (-b + sqrt(delta))/(2*a);
        solution2 = (-b - sqrt(delta))/(2*a);
        
        cout<<"This equation has two real solutions: x ="<<solution1<<" or x = "<<solution2<<endl;
    }
    
    else if (delta==0)
    {
        if ((a==0) && (b==0) && (c!=0))
        {
            cout<<"This equation has no solutions."<<endl;
        }
        
        else // not that special case then
        {
            double solution;
            solution = -b/(2*a);
            
            cout<<"This equation has a single real solutions: x ="<<solution<<endl;
        }
    }
    
    
    else if (delta<0)
    {
       cout<<"This equation has no real solutions."<<endl;
    }

    return 0;
}
