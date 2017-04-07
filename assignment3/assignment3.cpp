/* Assignment 3
 * Created By: Josue Guzman
 * Date: April 6, 2017

 * Rock Paper Scissors Lizard Spock Game:
 * The both the user and computer choos one of the five options. 
 * The game is best out of 5 rounds and the computer determines who wins.
 * The program scores the game for the user based on how many games they win. 
 */    

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
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
    }
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
    int computerChoice = rand() % 5 + 1;
    int userChoice;
    do {
        
        srand(time(0));

        cout << "Welcome to Rock Paper Scissors Lizard Spock!" << endl;
        cout << endl;
        cout << "The Rules:"                    << endl;
        cout << "Scissors cuts Paper"           << endl;
        cout << "Paper covers Rock"             << endl;
        cout << "Rock crushes Lizard"           << endl;
        cout << "Lizard poisons Spock"          << endl;
        cout << "Spock smashes Scissors"        << endl;
        cout << "Scissors decapitates Lizard"   << endl;
        cout << "Lizard eats Paper"             << endl;
        cout << "Paper disproves Spock"         << endl;
        cout << "Spock vaporizes Rock"          << endl;
        cout << "Rock crushes Scissors"         << endl;
        cout << endl;
        cout << "Choose your move (pick a # between 1 & 5):" << endl;
        cout << endl;
        cout << "1) Rock"                       << endl;
        cout << "2) Paper"                      << endl;
        cout << "3) Scissors"                   << endl;
        cout << "4) Lizard"                     << endl;
        cout << "5) Spock\n\n"                  << endl;
        cin >> userChoice;

        if (!(userChoice >= 1 && userChoice <= 5)) {
            cout << "What are you doing? Choose a # between 1 & 5!!!" << endl; }
        
        else {
            cout << "You chose: ";
            game.outputChoice(userChoice);
            cout << endl;
            cout << "The computer chose: ";
            game.outputChoice(computerChoice);
            cout << endl;
            cout << endl;
            cout << "The result is..." << endl; }

        if (game.isWin(userChoice, computerChoice)) {
            cout << "You WIN!!!!!" << endl; }

        else if (game.isDraw(userChoice, computerChoice)) {
            cout << "You chose well, but so did I - TIE!" << endl; }

        else {
            cout << "You LOSE!!!" << endl; }
    }
    
    while (userChoice == computerChoice); //do while loop ends here

    return 0;
}
    
    
