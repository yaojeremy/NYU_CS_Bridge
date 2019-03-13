//
//  jy2179_hw3_q6
//


#include <iostream>
using namespace std;

int main()
{   string day;
    int hour, minutes,totaltime;
    int length;
    double cost;
    char temp;
    
    cout<<"Please enter the day of the week: ";
    cin>>day;
    
    cout<<"Please enter the time at which the call started: ";
    cin>>hour>>temp>>minutes;
    
    cout<<"Please enter the length of the call (in minutes): ";
    cin>>length;
    
    totaltime = 60*hour + minutes;
    
    if ((day=="Mo") || (day=="Tu") || (day=="We") || (day=="Th") || (day=="Fr") )
    {
        if ((totaltime>=480) && (totaltime<= 1080))
        {
            cost = length*0.40;
        }
        
        else // start before 8:00 or after 18:00
        {
            cost = length*0.25;
        }
    }
    
    else // call on the week-end
    {
        cost = length*0.15;
    }
    
    cout<<"The total cost of the call is : "<<cost<<" dollars."<<endl;
    
    return 0;
}
