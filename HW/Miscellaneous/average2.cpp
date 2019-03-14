//
//  average2.cpp
//


#include <iostream>
using namespace  std;

int main() {
    bool endOfInput;
    int sum, numOfStudents;
    int currentnumber;
    double average;
    
    cout<<"Please enter the students grades (separed by a space): "<<endl;
    cout<<"End the sequence by tapping -1"<<endl;
    
    // initialisation
    sum = 0;
    numOfStudents = 0;
    endOfInput = false;
    
    while (endOfInput == false)
    {
        cin>>currentnumber;
        
        if (currentnumber == -1)
        {
            endOfInput = true;
        }
        else
        {
            sum += currentnumber;
            numOfStudents++;
        }
    }
    
    
    average = (double) sum/ (double)numOfStudents;
    
    cout<<"The class average is "<<average<<endl;
    
    return 0;
}
