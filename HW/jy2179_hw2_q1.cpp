//  jy2179_hw2_q1

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
    
    
    cout<<"Please enter number of coins:"<<endl;
    
    cout<<"of quarters: ";
    cin>>quarters;

    cout<<"of dimes: ";
    cin>>dimes;
    
    cout<<"of nickels: ";
    cin>>nickels;
    
    cout<<"of pennies: ";
    cin>>pennies;
    
    total_cents = 25*quarters + 10*dimes + 5*nickels + pennies;
    dollars = total_cents/100;
    cents=total_cents%100;
    
    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents.";
    
    return 0;
    
    
}
