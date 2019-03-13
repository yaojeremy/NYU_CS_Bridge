//
//  main.cpp
//  jy2179_hw8_q5
//


#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, middle, last;
    cout<<"Please enter your name on the following format: first, middle, last name: "<<endl;
    cin>>first>>middle>>last;
    
    middle = middle.substr(0,1);
    
    cout<<last<<", "<<first<<" "<<middle<<"."<<endl;
    return 0;
}
