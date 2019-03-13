//
//  main.cpp
//  jy2179_hw8_q6
//


#include <iostream>
#include <string>

bool ifDigits(char input);
using namespace std;
int main() {
    string str;
    int length;
    
    
    cout<<"Please enter a line of text: "<<endl;
    
    
    getline(cin,str);
    
    length = str.length()+1;
    str[length-1]=' ';
    
    
    int space_index[100];
    int m =-1;
    int temp, count;
    temp = 0;
    count = 0;
    for (int i =0 ; i<length; i++) {
        
        if(temp != str.find(" ",i)){
            temp =  str.find(" ",i);
            m++;
            space_index[m]= temp;
            

            }
        }
    space_index[m]= length-1;
    
    string check;
    bool boolval;
    for (int j=0; j<m; j++) {
        
        
        check = str.substr(space_index[j]+1,space_index[j+1]-space_index[j]);
       
        for (int i=0; i<space_index[j+1]-space_index[j];i++) {
            

            boolval = ifDigits(check[i]);

            if (boolval== false){
                cout<<space_index[j]+1+i<<" ";
                str[space_index[j]+1+i]=check[i];
            }

        }
    }
    /*
    for (int i=0; i<length; i++) {
        cout<<str[i];
    }

    */
    
    
// My userID is john17 and my 4 digit pin is 1234 which is secret
    return 0;
}

bool ifDigits(char input){
    bool boolval;
    if (input == '0')
        boolval = true;
    else if (input == '1')
        boolval = true;
    else if (input == '2')
        boolval = true;
    else if (input == '3')
        boolval = true;
    else if (input == '4')
        boolval = true;
    else if (input == '5')
        boolval = true;
    else if (input == '6')
        boolval = true;
    else if (input == '7')
        boolval = true;
    else if (input == '8')
        boolval = true;
    else if (input == '9')
        boolval = true;
    else
        boolval = false;
    return boolval;
}

