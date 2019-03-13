//
//  jy2179_hw3_q1
//


#include <iostream>
using namespace std;


int main ()
{
    double firstItem;
    double secondItem;
    string clubCard;
    double taxRate;
    double sum;
    double discountedPrice;
    double discountedSum;
    double totalTaxed;
    
    cout<<"Enter price of first item: ";
    cin>>firstItem;
    
    cout<<"Enter price of second item: ";
    cin>>secondItem;
    
    cout<<"Does customer have club card? (Y/N): ";
    cin>>clubCard;
    
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>taxRate;
    
    sum = firstItem + secondItem;
    
    cout<<"Base price: "<<sum<<endl;
    
    if (firstItem>secondItem)
    {
        
        
        if ((clubCard =="y") || (clubCard == "Y"))
        {
            discountedPrice = 0.5*secondItem;
            discountedSum = 0.9*(discountedPrice + firstItem);
        }
        else
        {
            discountedPrice = 0.5*secondItem;
            discountedSum = discountedPrice + firstItem;
            
        }
    }
    
    else // (firstItem<=secondItem)
    {
        if ((clubCard =="y") || (clubCard == "Y"))
        {
            discountedPrice = 0.5*firstItem;
            discountedSum= 0.9*(discountedPrice + secondItem);
        
        }
        else
        {
            discountedPrice = 0.5*firstItem;
            discountedSum= discountedPrice + secondItem;
        }
    }
    
    cout<<"Price after discounts: "<<discountedSum<<endl;
    
    totalTaxed = discountedSum + (taxRate*discountedSum)/100;
    cout<<"Total price: "<<totalTaxed<<endl;

    
    
    
    return 0;
    
}
