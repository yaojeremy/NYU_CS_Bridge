#include <iostream>
using namespace std;

void printAsc(int start, int end);

int main(){

  int start, end;
  
  cout<<"Please enter two numbers:"<<endl:
  cin<<start<<end<<endl;
  
  printAsc(start,end);

}



void printAsc(int start, int end){

  if (start == end)
    cout<<start<<endl;

  else{
    printAsc(start, end-1);
    cout<<end<<endl;
  }
  
  
}
