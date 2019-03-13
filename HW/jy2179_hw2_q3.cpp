//
//  jy2179_hw2_q3


#include <iostream>
using namespace std;


int main()
{
    int daysJW; /*  number of days John worked*/
    int hoursJW; /*  number of hours John worked*/
    int minutesJW; /*  number of minutes John worked*/
    
    int daysBW; /*  number of days Bill worked*/
    int hoursBW; /*  number of hours Bill worked*/
    int minutesBW; /*  number of days Bill worked*/
    

    int totalDays;
    int totalHours;
    int totalMinutes;
    int totalTimeH;

    
    cout<<"Please enter the number of days John has worked: ";
    cin>>daysJW;
    
    cout<<"Please enter the number of hours John has worked: ";
    cin>>hoursJW;
    
    cout<<"Please enter the number of minutes John has worked: ";
    cin>>minutesJW;
    cout<<endl;
    
    cout<<"Please enter the number of days Bill has worked: ";
    cin>>daysBW;
    
    cout<<"Please enter the number of hours Bill has worked: ";
    cin>>hoursBW;
    
    cout<<"Please enter the number of minutes Bill has worked: ";
    cin>>minutesBW;
    
    totalTimeH = (daysJW+daysBW)*24 + (hoursJW+hoursBW)+ (minutesJW+minutesBW)/60;
     /* this variable denotes the total time in hours in integer value */
    totalMinutes = (minutesJW+minutesBW)%60;
     /* this variable describes the rest of the time in minutes */
    totalDays = totalTimeH/24;
    totalHours = totalTimeH%24;
 
    cout<<"The total time both of them worked together is: "<<totalDays<<" days, "<<totalHours<<" hours and "<<totalMinutes<<" minutes."<<endl;
    
    return 0;
    
}
