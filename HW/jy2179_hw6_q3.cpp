//
//  jy2179_hw6_q3
//
//
#include <iostream>
using namespace std;

double eApprox(int n);
int factorial(int n);

int main() {
    
    cout.precision(30);
    
    for (int n = 1; n <= 15; n++) {
        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
    }
    return 0;
}

double eApprox(int n){
//    initialisation
    double taylor_series;
    taylor_series=0;
    
    for (int i=1; i<=n; i++)
    {   double taylor_series_i;
        taylor_series_i = factorial(i);
        taylor_series += 1/taylor_series_i;
    }
    return taylor_series;
}
int factorial(int n){
    
    int factRes, i;
    factRes = 1;
    for (i=1; i<n; i++)
    {
        factRes *=i;
    }
    return factRes;
}
