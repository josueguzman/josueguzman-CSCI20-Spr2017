/* Assignment 3
 * Created By: Josue Guzman
 * Date: April 6, 2017

 * Rock Paper Scissors Lizard Spock Game:
 * Both the user and computer will choose one of the five options. 
 * The game is best out of 3 rounds and the computer determines the winner.
 * The program scores the game for the user based on how many games they win. 
 */    

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class Game {
 
    private:
    int userChoice, computerChoice; // variables
    
    public:
    void outputChoice(int c) {      // method definition & integer is labelled as "c" here
        switch(c) {
    
            case 1:
                cout << "Rock";
                break;

            case 2:
                cout << "Paper";
                break;

            case 3:
                cout << "Scissors";
                break; 
        
            case 4:
                cout << "Lizard";
                break; 
            case 5:
                cout << "Spock"; 
                break; }
                
        }

    bool isWin (int userChoice, int computerChoice) {
        bool result =
        (   (userChoice == 1 && computerChoice == 3) || // AND - OR statements 
            (userChoice == 1 && computerChoice == 4) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 2 && computerChoice == 5) ||
            (userChoice == 3 && computerChoice == 2) ||
            (userChoice == 3 && computerChoice == 4) ||
            (userChoice == 4 && computerChoice == 2) ||
            (userChoice == 4 && computerChoice == 5) ||
            (userChoice == 5 && computerChoice == 1) ||
            (userChoice == 5 && computerChoice == 3)    );
        return result; }
    
    bool isDraw (int userChoice, int computerChoice) {
        bool result = 
            ((userChoice == computerChoice));
        return result; }

};

int main() {
   
    Game game;
    
    int userChoice;
    int win  = 0;
    int loss = 0;
    int tie  = 0;
    for (int i = 0; i < 3; i++) {               // switch for and and do
    
    int computerChoice = ((rand() % 5) + 1);    // generates a new # for the computer
    srand(time(0));                             // command to invoke random number
      
        cout << endl;
        cout << "Welcome to Rock Paper Scissors Lizard Spock!" << endl;
        cout << endl;
        cout << "The Rules:"                << endl; // lists the rules of the game
        cout << "Scissors cuts Paper"       << endl;
        cout << "Paper covers Rock"         << endl;
        cout << "Rock crushes Lizard"       << endl;
        cout << "Lizard poisons Spock"      << endl;
        cout << "Spock smashes Scissors"    << endl;
        cout << "Scissors decapitates Lizard" << endl;
        cout << "Lizard eats Paper"         << endl;
        cout << "Paper disproves Spock"     << endl;
        cout << "Spock vaporizes Rock"      << endl;
        cout << "Rock crushes Scissors"     << endl;
        cout << endl;
        cout << "This game will be best out of 3 rounds" << endl;
        cout << endl;
        cout << "Choose your move (pick a # between 1 & 5):" << endl;
        cout << endl;
        
        // choices for the user to pick
        cout << "1) Rock"       << endl;
        cout << "2) Paper"      << endl;
        cout << "3) Scissors"   << endl;
        cout << "4) Lizard"     << endl;
        cout << "5) Spock"      << endl;
        cout << endl;
        cin  >> userChoice;                             // inputs user's choice

        
        if (!(userChoice >= 1 && userChoice <= 5)) {    // makes user pick a number between 1-5
            cout << "What are you doing? Choose a # between 1 & 5!!!" << endl; }
        
        else {
            cout << "You chose: ";
            game.outputChoice(userChoice);              // repeats what the user chose
            cout << endl;
            cout << "The computer chose: ";
            game.outputChoice(computerChoice);          // prints out the computer's random choice
            cout << endl;
            cout << endl;
            cout << "The result is..." << endl; 
            cout << endl; }

        if (game.isWin(userChoice, computerChoice)) {   // prints if user wins
            cout << "You WIN!!!" << endl; 
            win++; } // tracks # of wins

        else if (game.isDraw(userChoice, computerChoice)) {     // prints if tie
            cout << "You chose well, but it's a TIE!!!" << endl; 
            tie++; } // tracks # of ties

        else {
            cout << "You LOSE!!!" << endl; 
            loss++; } // tracks # of losses 
    
            cout << "User's Score: " << win << endl;            // prints out user's final score
            cout << "Computer's Score: " << loss << endl;       // prints out comp's final score 
            cout << "Ties: " << tie << endl;                    // prints out final # of ties
        
     
    }    
    return 0;
}
    
    

    
    
