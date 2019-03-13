//
//  jy2179_hw2_q4

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int sum;
    int substraction;
    int multiplication;
    double realDiv;
    int quotient;
    int remainder;
    
    cout<<"Please enter two positive integers, separated by a space:"<<endl;
    cin>>num1>>num2;
    
    sum = num1 + num2;
    substraction = num1 - num2;
    multiplication = num1*num2;
    realDiv = ((double)(num1))/((double)(num2));
    quotient= num1/num2;
    remainder=num1%num2;
    
    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
    cout<<num1<<" - "<<num2<<" = "<<substraction<<endl;
    cout<<num1<<" * "<<num2<<" = "<<multiplication<<endl;
    cout<<num1<<" / "<<num2<<" = "<<realDiv<<endl;
    cout<<num1<<" div "<<num2<<" = "<<quotient<<endl;
    cout<<num1<<" mod "<<num2<<" = "<<remainder<<endl;
    
    return 0;
    
}
