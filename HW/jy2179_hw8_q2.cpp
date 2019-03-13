//
//  jy2179_hw8_q2
//

#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(string str);

int main() {
    bool boolval;
    string input;
    cout<<"Please enter a word: ";
    cin>>input;
    boolval=isPalindrome(input);
    if (boolval==true){
        cout<<input<<" is a palindrome"<<endl;
    }
    else
        cout<<input<<" is not a palindrome"<<endl;
    return 0;
}
bool isPalindrome(string str){
    bool bool_value;
    int length, count;
    length = str.length();
    int i;
//    init
    count=0;
    bool_value= true;
    for (i=0; i<length; i++) {
        
        if (str[i] != str[length-i-1]){
            char char1,char2;
            char1 = str[i];
            char2 = str[length-i-1];
//            ascii value to become case insensitive
            if (((char)(char1 - 32) == char2)){
                bool_value= true;
            }
            else if ((char)(char1+32)==char2)
                bool_value= true;
        
            else
                bool_value= false;
            
        }

        i++;
    }
    
    return bool_value;
}
