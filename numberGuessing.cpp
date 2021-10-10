// Author : Abigayle McVaney
// Program Description: Try to guess the random number generated,
//                      using if else statements.

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{
    // Variables being declared
    srand (time (NULL));   // Generates the random number for the program.
    int randomNumber = rand() % 36 + 5;
    int guess;
    int loop;
   
    
    // Header
    cout << "Welcome to my Simple Guessing Game"<< endl;
    cout <<  endl;
    cout << "I am thinking of a number between 5 and 40. "<< endl;
    cout << "You are given up to seven tries to guess the exact number."<< endl;
    cout << endl;
    cout << "Can you guess what it is ?             ";
    cin >> guess;   // User's input is then stored
    
    
    for(loop = 6; loop !=0; loop --) // Looping 6 times to repeat the function
                                     // below.
    
{
    
    if (guess == randomNumber)   // If guess is equal to randomNumber, then
                                 // end program.
   { cout << "\n\n\nCongratulations Abigayle McVaney!!! You did it.";
    return 0;
   }
    
   if (guess > randomNumber) // If guess is greater than randomNumber, then
                             // try again till loop ends.
   { cout << "Your guess is high. Try again          ";
       cin >> guess;
   }
    
   else // If guess is less than randomNumber, then
        // try again till loop ends.
   { cout << "Your guess is low.  Try again          ";
      cin >> guess;
   }
    
}
    
    
    // The seventh try.
    if (guess == randomNumber)
    {  cout << "\n\n\nCongratulations Abigayle McVaney!!! You did it." << endl;
    }
    
    else
    {  cout << "\n\n\nSorry , The number is  " << randomNumber << endl;
        cout << "Better luck next time Abigayle McVaney." << endl;
    }
   
    
    return 0;
}
