//
//  jy2179_hw3_q5
//

#include <iostream>
using namespace std;

int main()
{
    double weight, height;
    double BMI;
    string status;
    
    cout<<"Please enter weight (in pounds): ";
    cin>>weight;
    
    cout<<"Please enter height (in inches): ";
    cin>>height;
    
    weight *= 0.453592;
    height *= 0.0254;
    
    BMI = weight/(height*height);
    
    if (BMI<18.5)
    {
        status = "Underweight";
    }
    
    else if ((BMI>=18.5)&&(BMI<25))
    {
        status = "Normal";
    }
    
    else if ((BMI>=25)&&(BMI<30))
    {
        status = "Overweight";
    }
    else if (BMI>=30)
    {
        status = "Obese";
    }
    
    
    cout<<"The weight status is: "<<status<<endl;
    
    return 0;
}
