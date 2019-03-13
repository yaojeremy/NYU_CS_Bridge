//
//  main.cpp
//  jy2179_hw8_q4
//


#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void randomGen(int arrNum[]);

int main() {
    int arrSize = 10;
    int arruser = 5;
    int arrNum[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrPin[10];
    int user_code[5];
    char input,a;
    bool pincorrect;
    
    randomGen(arrPin);
    cout<<"Please enter your PIN according to  the following mapping:"<<endl;
    cout<<"PIN: 0 1 2 3 4 5 6 7 8 9 "<<endl;
    cout<<"NUM: ";
    
    for( int i =0; i<arrSize;i++){
        cout<<arrPin[i]<<" ";
    }
    cout<<endl;
    
    for (int j=0; j<arruser;j++ ){
        cin>>input;
        user_code[j]= input;
        
    }
    pincorrect = true;
    for (int j=0; j<arruser;j++ ){
        a = '0' + arrPin[j];
        
        if ((user_code[j]) != a){
            pincorrect = false;
        }
        
    }
    if (pincorrect == true)
        cout<<"Your PIN is correct"<<endl;
    else
        cout<<"Your PIN is incorrect"<<endl;
    return 0;
    
}
void randomGen(int arrPin[]){
    
    srand (time(0));
    
    arrPin[0] = ((rand() % 3) + 1);
    arrPin[1] = ((rand() % 3) + 1);
    arrPin[2] = ((rand() % 3) + 1);
    arrPin[3] = ((rand() % 3) + 1);
    arrPin[4] = ((rand() % 3) + 1);
    arrPin[5] = ((rand() % 3) + 1);
    arrPin[6] = ((rand() % 3) + 1);
    arrPin[7] = ((rand() % 3) + 1);
    arrPin[8] = ((rand() % 3) + 1);
    arrPin[9] = ((rand() % 3) + 1);
    
}
