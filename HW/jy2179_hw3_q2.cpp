//
//  jy2179_hw3_q2
//


#include <iostream>
using namespace std;


int main ()
{
    string name;
    int gradYear;
    int currentYear;
    string status;
    
    cout<<"Please enter your name: ";
    cin>>name;
    
    cout<<"Please enter your graduation year: ";
    cin>>gradYear;
    
    cout<<"Please enter current year: ";
    cin>>currentYear;

    
    if (gradYear <= currentYear)
    {
        status = "graduated";
        cout<<name<<", you have "<<status<<"."<<endl;
    }
    else if (currentYear == gradYear - 1)
    {
        status = "Senior";
        cout<<name<<", you are a "<<status<<"."<<endl;
    }
    
    else if (currentYear == gradYear - 2)
    {
        status = "Junior";
        cout<<name<<", you are a "<<status<<"."<<endl;
    }
    
    else if (currentYear == gradYear - 3)
    {
        status = "Sophomore";
        cout<<name<<", you are a "<<status<<"."<<endl;
    }
    
    else if (currentYear == gradYear - 4)
    {
        status = "Freshman";
        cout<<name<<", you are a "<<status<<"."<<endl;
    }
    
    else //(currentYear < gradYear-4)
    {
        status = "not in college yet";
        cout<<name<<", you are a "<<status<<"."<<endl;
    }
    
        
    return 0;
    
}
