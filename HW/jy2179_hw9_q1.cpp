//
//  jy2179_hw9_q1
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void assignVector(vector<char> & vector, string str);
void findSpace(vector<char> v, vector<int>& index);
int findNumOfwords(vector<int>& index, int numwords);
void findNumOfChar(vector<char> v, vector<int> index);
int main() {
    string str;
    vector<char> v;
    vector<int> space_index;
    int num_words = 0;
    
    cout<<" Please enter a line of text: "<<endl;
    getline(cin,str);
    
    assignVector(v,str);
    findSpace(v,space_index);
    num_words = findNumOfwords(space_index, num_words);
    
    cout<<endl;
    cout<<num_words<<"     "<<"words"<<endl;
    findNumOfChar(v,space_index);

    return 0;
}

void assignVector(vector<char> & v, string str){
v.push_back(' ');
for (int i=0; i<str.length(); i++){
    v.push_back(str[i]);
}
v.push_back(' ');
}

void findSpace(vector<char> v, vector<int>& index){
    for (int i=0; i< v.size(); i++){
        if (v[i] == ' '){
            index.push_back(i);
        }
    }
}
int findNumOfwords(vector<int>& index, int numwords){
    //    we substract the spaces we added in the beginning;
    numwords = (int) index.size() - 1;
    return numwords;
}

void findNumOfChar(vector<char> v, vector<int> index){
    vector<char> alphabet;
    int const sizeAlphabet = 26;
    for (int i=0; i<sizeAlphabet; i++){
        alphabet.push_back(97 + i);
}

    for (int i=0; i<sizeAlphabet; i++) {
        int count;
        count = 0;
        for (int j=0; j< (int) v.size(); j++) {
            if ((v[j]== alphabet[i]) ||(v[j]== (char)alphabet[i]-32)){
                count++;
            }
        }
        if (count>0)
            cout<<count<<"     "<<alphabet[i]<<endl;
    }
    
}
