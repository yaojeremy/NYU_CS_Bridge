//
//  average.cpp
//
//

#include <iostream>
using namespace std;

int main()
{   int number;
    int count;
    double average, sum, current;
    
    cout<<"Please enter the number of student in the class: ";
    cin>>number;
    
    cout<<"Please enter the students grades (separed by a space): ";
    
    sum = 0;
    
    for (count = 1; count<=number; count++)
    {
        cin>>current; // inputted grade
        sum +=current; // added to sum
        
    }
    
    average = sum/(double) number;
    
    cout<<"The average is "<<average<<"."<<endl;
    
    
    
    
    return 0;
}
