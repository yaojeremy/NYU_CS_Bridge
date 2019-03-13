//
//  jy2179_hw5_q2
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int x1, x2, x3, x4;
    int number_guess, low_bound, high_bound;
    int my_guess;
    srand(time(0));
    
    x1 = rand();
    x2 = rand();
    x3 = rand() % 100;
    x4 = (rand() % 100) + 1;
   
//    initialisation
    number_guess = 5;
    low_bound = 1;
    high_bound = 100;

    cout<<"I thought of a number between 1 and 100! Try to guess it."<<endl;

    
    while (number_guess>0)
    {
        cout<<"Range: ["<<low_bound<<", "<<high_bound<<"], Number of guesses left: "<<number_guess<<endl;
        cout<<"Your guess: ";
        cin>>my_guess;
        
        if (my_guess == x4)
        {
            cout<<"Congrats! You guessed my number in "<<5-number_guess+1<<" guesses.";
            number_guess = -1;
        }
        if (my_guess > x4)
        {
            if (my_guess<high_bound)
            {
                high_bound = my_guess - 1;

            }
            
            number_guess--;
            cout<<"Wrong! My number is smaller."<<endl;
        }
        if (my_guess < x4)
        {
            if (my_guess>low_bound)
            {
               low_bound = my_guess + 1;
            }
            
            number_guess--;
            cout<<"Wrong! My number is bigger."<<endl;
        }
        
    }
    
    if (number_guess ==0)
    {
        cout<<"Out of guesses! My number is "<<x4<<endl;
    }
    
    return 0;
}
