//
//  jy2179_hw7_q2
//


#include <iostream>
#include <cmath>
using namespace std;

void analyzeDivisors(int n, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);

int main() {
    bool boolean_value;
    int integer;
    
    
    cout<<"Please enter a positive integer >=2: ";
    cin>>integer;
    
    cout<<"Perfect numbers:"<<endl;
    
    for (int i=2; i<integer; i++)
    {
        boolean_value = isPerfect(i);
        if (boolean_value == true){
            cout<<i<<" ";
            }
    }
    
    cout<<endl;
    for (int i=2; i<integer; i++){
        int count_div, sum_div;
        int temp_sum, temp_sum_2,sum_div2;
        
        analyzeDivisors(i,count_div, sum_div);
        temp_sum = sum_div;
        analyzeDivisors(temp_sum,count_div, sum_div2);
        temp_sum_2 = sum_div2;
        if ((i < temp_sum) && (temp_sum <= integer) && (temp_sum_2 == i)) {
            cout<<endl<<"Pair of amicable numbers :"<<i<<" & "<<temp_sum;
        
    }
        
    
    }
    cout<<endl;
    
    return 0;
}

void analyzeDivisors(int n, int& outCountDivs, int& outSumDivs){
    
    outCountDivs = -1;
    outSumDivs = -n;
    
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            outCountDivs++;
            outSumDivs+=i;
        }
        
    }
    
    for (int k= sqrt(n); k>0; k--)
    {
        if (n%k == 0)
        {
            outCountDivs++;
            outSumDivs+=n/k;
        }
    }
}

bool isPerfect(int num){
    bool boolean_value;
    int count_div, sum_div;
    
    analyzeDivisors(num, count_div, sum_div);
    
    if (sum_div == num){
        boolean_value = true;
    }
    
    else
        boolean_value = false;
    
    return boolean_value;
}
