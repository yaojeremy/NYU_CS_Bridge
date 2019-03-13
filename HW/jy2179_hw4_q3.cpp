//
//  jy2179_hw4_q3
//

#include <iostream>
using namespace std;

int main()
{
    int decimal_number;
    int power_0, power_1, power_2, power_3, power_4, power_5, power_6;
    
    
    cout<<"Enter decimal number: "<<endl;
    cin>>decimal_number;
    /*
     quick reminder:
     
     2^6 = 64
     2^5 = 32
     2^4 = 16
     2^3 = 8
     2^2 = 4
     2^1 = 2
     2^0 = 1
     
     */
    
    // we use integer division and modulo division to get the respective power of 2
    power_6 = decimal_number/64;
    power_5 = (decimal_number%64)/32;
    power_4 = ((decimal_number%64)%32)/16;
    power_3 = (((decimal_number%64)%32)%16)/8;
    power_2 = ((((decimal_number%64)%32)%16)%8)/4;
    power_1 = (((((decimal_number%64)%32)%16)%8)%4)/2;
    power_0 = ((((((decimal_number%64)%32)%16)%8)%4)%2);
    
    cout<<"The binary representation of "<<decimal_number<<" is "
    <<power_6<<power_5<<power_4<<power_3<<power_2<<power_1<<power_0<<". "<<endl;
    
    return 0;
}
