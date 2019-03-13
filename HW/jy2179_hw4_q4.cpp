//
//  main.cpp
//  jy2179_hw4_q4
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    int n;
    int count;
    double geometric_mean, product, current;
    
    cout<<"Please enter the length of the sequence: ";
    cin>>n;
    
    cout<<"Please enter your sequence: ";
    
    product = 1; // initialisation
    
    for (count = 1; count<=n; count++)
    {
        cin>>current; // inputted number
        product *=current; // added to sum
        
    }
    
    double double_product,double_root;
    double_product= (double)product;
    double_root = (double) 1/n;
    
    geometric_mean = pow(double_product, double_root);
    
    cout<<"The geometric mean is "<<geometric_mean<<"."<<endl<<endl;
    
    //-----------------------------------------
    //  version with "-1"
    //__________________________________________
    
    bool endOfInput;
    int num;
    int currentnumber;

    double geometric_mean2, product2;

    cout<<"Please enter a non-empty sequence of positive integers, each one separed by a space. End your sequence by tapping -1"<<endl;
    
    // initialisation
    product2 = 1;
    num = 0;
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
            product2 *= currentnumber;
            num++;
        }
    }
    
    double double_product2,double_root2;
    double_product2= (double)product2;
    double_root2 = (double) 1/num;
    
    geometric_mean2 = pow(double_product2, double_root2);
    
    
    cout<<"The geometric mean is "<<geometric_mean2<<endl;
    
    return 0;
}
