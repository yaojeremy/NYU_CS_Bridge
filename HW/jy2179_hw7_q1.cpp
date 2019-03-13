//
//  main.cpp
//  jy2179_hw7_q1
//
//

#include <iostream>

using namespace std;

bool ifLeapYearOrNot(int year);
int printMonthCalendar(int numOfDays, int startingDay);
void printYearCalendar(int year, int startingDay);

int main() {
    
    printYearCalendar(2016,5);
  
    return 0;
}

int printMonthCalendar(int numOfDays, int startingDay){
    
    int initialSpace;
    int count, countDigits;
    initialSpace = 3;
    count = 0;
    
    cout<<"   Mon"<<"   Tue"<<"   Wed"<<"   Thu"<<"   Fri"<<"   Sat"<<"   Sun"<<endl;
    
    for (int i=0; i<startingDay; i++){
        
        for (int k=2; k<initialSpace; k++) {
            cout<<"   ";
//            print 3 spaces each time
        }
        if (i<startingDay-1){
            cout<<"   ";
        }
        
        
        if (i == 7){
            cout<<endl;
            cout<<"   ";
        }
        else if (i == 14){
            cout<<endl;
            cout<<"   ";
        }
        else if (i == 21){
            cout<<endl;
            cout<<"   ";
        }
        else if (i == 28){
            cout<<endl;
            cout<<"   ";
        }
        
        
    }
    for (int j=1; j<numOfDays+1; j++) {
        cout<<j;
        
        int a;
        a = j;
        countDigits=0;
        
        while(a!=0)
        {
            a = a/10;
            countDigits++;
        }
        
        if (countDigits==1){
            for (int k=2; k<initialSpace; k++) {
                cout<<"     ";
                count++;
            }
        }
        
        if (countDigits==2){
            for (int k=2; k<initialSpace; k++) {
                cout<<"    ";
                count++;
            }
        }
        if ((startingDay + count -1)%7 == 0)
        {
            cout<<endl;
            cout<<"   ";
        }
    
    }
    int last_day,last_day_total, modulo;
    modulo = numOfDays%7 - 1;
    last_day_total =startingDay+modulo;
    
    if (last_day_total<=7){
        last_day = last_day_total;
    }
    else if (last_day_total==8){
        last_day = 1;
    }
    else if (last_day_total==9){
        last_day = 2;
    }
    else if (last_day_total==10){
        last_day = 3;
    }
    else if (last_day_total==11){
        last_day = 4;
    }
    else if (last_day_total==12){
        last_day = 5;
    }
    else if (last_day_total==13){
        last_day = 6;
    }
    else if (last_day_total==14){
        last_day = 7;
    }
    
    return last_day;
}

bool ifLeapYearOrNot(int year){

    bool boolean_value = false;
    
    if ((year%4 ==0) && (year%100 != 0)){
        boolean_value = true;
    }
    
    if ((year%4 ==0) && (year%100 == 0)){
        
        if ((year%4 ==0) && (year%400 == 0)){
            boolean_value = true;
        }
        else
            boolean_value = false;
    }

    return boolean_value;
}

void printYearCalendar(int year, int startingDay){
    
    int JanDays, FebDays, MarDays, AprDays, MayDays, JunDays, JulDays, AugDays, SepDays, OctDays, NovDays, DecDays;
    int lastday_Jan, lastday_Feb, lastday_Mar, lastday_Apr, lastday_May, lastday_Jun, lastday_Jul, lastday_Aug, lastday_Sep, lastday_Oct, lastday_Nov, lastday_Dec;
    bool IFLeapYear;
    JanDays = MarDays = MayDays = JulDays= AugDays = OctDays = DecDays = 31;
    AprDays = JunDays = SepDays = NovDays= 30;
    
    IFLeapYear = ifLeapYearOrNot(year);
    
    if(IFLeapYear == true){
        FebDays = 29;
    }
    
    else if (IFLeapYear == false){
        FebDays = 28;
    }
    cout<<"January "<<year<<endl;
    lastday_Jan = printMonthCalendar(JanDays,startingDay);
    cout<<endl<<endl;
    
    cout<<"February "<<year<<endl;
    startingDay =lastday_Jan + 1;
    if (startingDay>7){
        startingDay -=7;
    }
    lastday_Feb = printMonthCalendar(FebDays,startingDay);
    cout<<endl<<endl;
    
    cout<<"March "<<year<<endl;
    startingDay =lastday_Feb + 1;
    if (startingDay>7){
        startingDay -=7;
    }
    lastday_Mar = printMonthCalendar(MarDays,startingDay);
    cout<<endl<<endl;
    
    cout<<"April "<<year<<endl;
    startingDay =lastday_Mar + 1;
    if (startingDay>7){
        startingDay -=7;
    }
    lastday_Apr = printMonthCalendar(AprDays,startingDay);
    cout<<endl<<endl;
    
    cout<<"May "<<year<<endl;
    startingDay =lastday_Apr + 1;
    if (startingDay>7){
        startingDay -=7;
    }
    lastday_May = printMonthCalendar(MayDays,startingDay);
    cout<<endl<<endl;
    
    cout<<"June "<<year<<endl;
    startingDay =lastday_May + 1;
    if (startingDay>7){
        startingDay -=7;
    }
    lastday_Jun = printMonthCalendar(JunDays,startingDay);
    cout<<endl<<endl;
    
    cout<<"July "<<year<<endl;
    startingDay =lastday_Jun + 1;
    if (startingDay>7){
        startingDay -=7;
    }
    lastday_Jul = printMonthCalendar(JulDays,startingDay);
    cout<<endl<<endl;
    
    cout<<"August "<<year<<endl;
    startingDay =lastday_Jul + 1;
    if (startingDay>7){
        startingDay -=7;
    }
    lastday_Aug = printMonthCalendar(AugDays,startingDay);
    cout<<endl<<endl;
    
    cout<<"September "<<year<<endl;
    startingDay =lastday_Aug + 1;
    if (startingDay>7){
        startingDay -=7;
    }
    lastday_Sep = printMonthCalendar(SepDays,startingDay);
    cout<<endl<<endl;
    
    cout<<"October "<<year<<endl;
    startingDay =lastday_Sep + 1;
    if (startingDay>7){
        startingDay -=7;
    }
    lastday_Oct = printMonthCalendar(OctDays,startingDay);
    cout<<endl<<endl;
    
    cout<<"November "<<year<<endl;
    startingDay =lastday_Oct + 1;
    if (startingDay>7){
        startingDay -=7;
    }
    lastday_Nov = printMonthCalendar(NovDays,startingDay);
    cout<<endl<<endl;

    cout<<"December "<<year<<endl;
    startingDay =lastday_Nov + 1;
    if (startingDay>7){
        startingDay -=7;
    }
    lastday_Dec = printMonthCalendar(DecDays,startingDay);
    cout<<endl<<endl;
    
    
}
