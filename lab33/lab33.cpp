/* Lab 3.3 - Loops
 * Created by Josue Guzman
 * April 15, 2017

This program is a guessing game program.  It reads values between 1 and 50 
(if users enter a value outside of that range it asks them to re-enter a 
value until they enter a valid number).  The program will check the user’s number
against the computer generated number.  If the user’s number is too high it will
say “Too High” and ask the user to guess again.  If the user’s number is too low, 
it will say “Too Low” and ask the user to guess again.  If the user finds the 
number, the program will tell the user “Just Right” and end the program.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

    //Computer random #
    
    int cpuRandomNum() {
    srand(time(0));
    return (rand() % 50 + 1); }   

int main() {
    int userGuess;
    int computerRandomNum = cpuRandomNum();
    

    cout << "Guess a number between 1 - 50" << endl;
    cin  >> userGuess;
    
    while (userGuess < 1 || userGuess > 50) {
        cout << "What are you doing? Pick a number between 1 - 50" << endl;
        cin >> userGuess; }

    if (userGuess == computerRandomNum) {
        cout << "Just right!  Good job!" << endl; }
    
    int i = userGuess;
    
    if (userGuess < computerRandomNum) {
        cout << "Too low! Guess again." << endl; }
   
    if (userGuess > computerRandomNum) {
        cout << "Too high! Guess again." << endl; }

   return 0;

}   