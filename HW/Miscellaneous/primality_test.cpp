//
//  main.cpp
//  primality_test.cpp
//

#include <iostream>
using namespace std;


    
    
    bool isPrime(int num){
        int countDivs;
        
        countDivs = 0;
        
        
        for (int i=1; i<= num; i++)
        {
            if (num%i ==0)
            {
                countDivs++;
            }
            
            if (countDivs == 2)
            {
                return true;
            }
            else
                return false;
        }
    }
    



    

