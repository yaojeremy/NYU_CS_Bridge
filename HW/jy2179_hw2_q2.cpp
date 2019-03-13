//
//  jy2179_hw2_q2


#include <iostream>
using namespace std;

int main()
{
    int quarters;
    int dimes;
    int pennies;
    int nickels;
    int total_cents, cents;
    int dollars;
    
    
    cout<<"Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin>>dollars>>cents;
    
    total_cents = 100*dollars + cents;
    
    quarters = total_cents/25;
    dimes = total_cents%25/10;
    nickels =(total_cents%25%10)/5;
    pennies = (total_cents%25%10)%5/1;
    
    cout<<dollars<<" dollars and "<<cents<<" cents are:"<<endl;
    cout<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies.";
    
    
    return 0;
    
    
}
