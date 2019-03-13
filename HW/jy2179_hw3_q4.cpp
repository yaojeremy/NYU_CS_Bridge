//
//  jy2179_hw3_q4
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    
    double number;
    int choice;
    int floorInt,ceilingInt, roundInt;
    
    
    cout<<"Please enter a Real number: ";
    cin>>number;
    
    cout<<endl
    <<"Choose your rounding methods: \n"
    <<"1. Floor round \n"
    <<"2. Ceiling round \n"
    <<"3. Round to the nearest whole number \n";
    cin>>choice;
    
    switch (choice) {
        case FLOOR_ROUND:
            floorInt = floor(number);
            cout<<floorInt;
            break;
            
        case CEILING_ROUND:
            ceilingInt = ceil(number);
            cout<<ceilingInt;
            break;
        
        case ROUND:
            roundInt = round(number);
            cout<<roundInt;
            break;
            
        default:
            cout<<"Not a valid choice. \n"
            <<"Please choose a number between 1,2 or 3.";
            break;
    }
    
    
    
    
    return 0;

}
