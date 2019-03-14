//
//  main.cpp


#include <iostream>
using namespace std;

const int MAX_CLASS_SIZE = 60;

int main() {
    int num_students;
    int grade_list[MAX_CLASS_SIZE];
    int current_grade, sum;
    double average;
    
    cout<<"Please enter the number of student in the class (no more than "<<MAX_CLASS_SIZE<<")"<<endl;
    cin>>num_students ;
    
//    reading the grades
    for (int j = 0;j< num_students;j++)
    {
        cin>>current_grade;
        grade_list[j]=current_grade;
    }
    
//    calculating the average
    sum = 0;
    
    for (int k = 0; k<num_students; k++) {
        sum +=grade_list[k];
    }
    
    average = (double) sum/ (double)num_students;
    
    cout<<"The class average is "<<average<<endl;
    
//    prints the grades above the average
    cout<<"The class average are ";
    for (int k = 0; k<num_students; k++) {
        if (grade_list[k]>average){
            cout<<grade_list[k]<<" ";
        }
    }
    
    
    return 0;
}
