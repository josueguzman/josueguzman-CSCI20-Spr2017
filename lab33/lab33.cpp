/* Lab 3.3 - Loops
 * Created by Josue Guzman
 * April 15, 2017

This program is a guessing game program.  It reads values between 1 and 50 
(if users enter a value outside of that range it asks them to re-enter a 
value until they enter a valid number).  The program will compare the user’s number
to the computer's generated number.  If the user’s number is too high it will
say “Too High” and ask the user to guess again.  If the user’s number is too low, 
it will say “Too Low” and ask the user to guess again.  If the user guesses the 
number, the program will tell the user “Just Right” and end the program.  The
program gives users 15 chances to guess.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

    int cpuRandomNum() { //Computer random #
    srand(time(0));
    return (rand() % 50 + 1); }   

int main() {
    int userGuess; 
    int chances = 15; // number of chances for the user to guess right
    int choice;
    int computerRandomNum = cpuRandomNum();
    
    cout << "Guess a number between 1 - 50" << endl; // user prompted to guess #
    cin  >> userGuess; // user input
    
    for (choice = 0; choice < 15 && userGuess != computerRandomNum; choice++, chances--) {
        
        while (userGuess < 1 || userGuess > 50) { // asks user to pick number within range
            cout << "What are you doing? Pick a number between 1 - 50" << endl;
            cin >> userGuess; }
        
        if (userGuess < computerRandomNum) { // user prompted to pick new # when wrong
            cout << "Too low!  Try guessing again!" << endl;
            cin  >> userGuess; }
            
        else if (userGuess > computerRandomNum) { // user prompted to pick new # when wrong
            cout << "Too high! Try guessing again!" << endl;
            cin  >> userGuess; }
            
} 
    
    if (chances == 0) {
        cout << "Game over" << endl; } //after 15 wrong guesses, game is over
    
    else {
        cout << "Just right!  You win!" << endl; } // if user chooses correctly, he/she wins
        
    return 0;

}   

