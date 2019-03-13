#include <iostream>
using namespace std;

int main()
{   int input, sum;
    int count_days;
    int miles, yard, inches;
    bool end_input;
    
    
//    initialisation
    end_input = false;
    count_days = 1;
    sum = 0;
    
    
    while (end_input == false)
    
    {
        cout<<"Enter the number of inches the snail traveled in day #"<<count_days<<", "<<endl;
        cout<<"or type -1 if they reached their destination:"<<endl;
        cin>>input;
        
        if (input == -1)
        {
            end_input = true;
        }
        
        else
        {
            sum += input;
            count_days++;
            
        }
    }
    //    After converting we get that 1 yard = 36 inches and 1 mile = 63,360
    cout<<sum<<endl;
    miles = sum/63360;
    yard = (sum%63360)/36;
    inches =((sum%63360)%36);
    
    cout<<"In "<<count_days-1<<" days, the snail traveled "<<miles<<" miles, "
    <<yard<<" yards and "<<inches<<" inches."<<endl;
    
    return 0;
}
