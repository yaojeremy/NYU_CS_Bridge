//
//  jy2179_hw4_q2
//

#include <iostream>
using namespace std;

int main()
{
    
    int decimal_number;
    int count_M, count_D, count_C, count_L, count_X, count_V, count_I;
    string printM,printD, printC, printL, printX, printV, printI;
    
    cout<<"Enter decimal number: "<<endl;
    cin>>decimal_number;
    
    
    // we use integer division and modulo division to get the respective roman letters
    count_M = decimal_number/1000;
    count_D = (decimal_number%1000)/500;
    count_C = ((decimal_number%1000)%500)/100;
    count_L = (((decimal_number%1000)%500)%100)/50;
    count_X = ((((decimal_number%1000)%500)%100)%50)/10;
    count_V = (((((decimal_number%1000)%500)%100)%50)%10)/5;
    count_I = ((((((decimal_number%1000)%500)%100)%50)%10)%5);
    
    while (count_M>0)
    {
        printM += "M";
        count_M--;
    }
    
    while (count_D>0)
    {
        printD += "D";
        count_D--;
    }
    while (count_C>0)
    {
        printC += "C";
        count_C--;
    }
    
    while (count_L>0)
    {
        printL += "L";
        count_L--;
    }
    while (count_X>0)
    {
        printX += "X";
        count_X--;
    }
    while (count_V>0)
    {
        printV += "V";
        count_V--;
    }
    while (count_I>0)
    {
        printI += "I";
        count_I--;
    }
    
    cout<<decimal_number<<" is "
    <<printM<<printD<<printC<<printL<<printX<<printV<<printI<<endl;
    
    return 0;
}
