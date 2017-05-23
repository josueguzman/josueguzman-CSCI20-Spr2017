/* 
Assignment 5.0 - Project
By: Josue Guzman & Daniel Vega
Date: May 22, 2017

For this assignment we were allowed to come up with our own project.
We decided to create an online store that allows the user to purchase new arrival
and clearence t-shirts.  The user is able to go back and forth.  When the user
is ready to check out, the program offers a "view cart" feature so he/she can
see what items are in there.  Then the user can "check out." A receipt is then 
printed on the screen and a text file receipt is automatically generated.

This Program Contains:
- A class
- Loops
- Strings
- File Output
- Appropriate user error handling
- The Pseudo Code and Proposal were submitted separately 
*/


#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

class shoppingCart { 
    
    private:
        
        string itemName;
        
        void clearanceMenu();
        void newArrivalMenu();
        void viewCartMenu();
        void checkout();
        
    public:
        void mainMenu();
        int i = 0;
        int itemPrices[100];
        string cartContents[100];
};

void shoppingCart::mainMenu(){
    int userChoice;
    cout << "MAIN MENU" << endl;
    cout << "1 for New Arrivals" << endl;
    cout << "2 for Clearance" << endl;
    cout << "3 to view cart" << endl << endl;
    cin >> userChoice;
    cout << endl;
    
    // Re-enter user choice if user choice is not valid
    while((userChoice < 1) | (userChoice > 3)){
        cout << "Not valid option, try again:" << endl;
        cin >> userChoice;
        cout << endl;
    }
    
    switch(userChoice){
        case 1:
            newArrivalMenu();
            break;
        case 2:
            clearanceMenu();
            break;
        case 3: 
            viewCartMenu();
            break;
        
        default:
            break;
    }
}

// function definition for menu for clearance apparel 
void shoppingCart::clearanceMenu(){
    int userChoice;
    cout << "CLEARANCE" << endl;
    cout << "1.red shirt-$10\n2.blue shirt-$10\n3.green shirt-$10" << endl << endl;
    cin >> userChoice;
    cout << endl;
    
    // Re-enter user choice if user choice is not valid
    while((userChoice < 1) | (userChoice > 3)){
        cout << "Not valid option, try again:" << endl;
        cin >> userChoice;
        cout << endl;
    }
    
        switch(userChoice){
        case 1:
            cartContents[i] = "red shirt";
            itemPrices[i] = 10;
            i++;
            mainMenu();
            break;
        case 2:
            cartContents[i] = "blue shirt";
            itemPrices[i] = 10;
            i++;
            mainMenu();
            break;
        case 3:
            cartContents[i] = "green shirt";
            itemPrices[i] = 10;
            i++;
            mainMenu();
            break;

        default:
            break;
    }
}

// function definitions for menu for arrivals
void shoppingCart::newArrivalMenu(){
    int userChoice;
    cout << "NEW ARRIVALS" << endl;
    cout << "1.red shirt-$15\n2.blue shirt-$15\n3.green shirt-$15" << endl << endl;
    cin >> userChoice;
    cout << endl;
    
    // Re-enter user choice if user choice is not valid
    while((userChoice < 1) | (userChoice > 3)){
        cout << "Not valid option, try again:" << endl;
        cin >> userChoice;
        cout << endl;
    }
    
        switch(userChoice){
        case 1:
            cartContents[i] = "red shirt";
            itemPrices[i] = 15;
            i++;
            mainMenu();
            break;
        case 2:
            cartContents[i] = "blue shirt";
            itemPrices[i] = 15;
            i++;
            mainMenu();
            break;
        case 3:
            cartContents[i] = "green shirt";
            itemPrices[i] = 15;
            i++;
            mainMenu();
            break;

        default:
            break;
    }
}

void shoppingCart::viewCartMenu(){ // FXN to view cart menu
    int userChoice;
    cout << "VIEW CART"<< endl;
    
    //loop to display contents and price
    for(int j=0; j < i; j++) {
    cout << cartContents[j] << "---$" << itemPrices [j] << endl;
    }
    
    cout << endl;
    cout << "1. return to main menu" << endl;
    cout << "2. checkout" << endl;
    cin >> userChoice;
    cout << endl;
    
    // Re-enter user choice if user choice is not valid
    while((userChoice < 1) | (userChoice >2)){
        cout << "Not valid option, try again:" << endl;
        cin >> userChoice;
        cout << endl;
    }
    switch(userChoice){
        case 1:
            mainMenu();
            break;
        case 2:
            cout << "Receipt" << endl;
            checkout();
            break;

        default:
            break;
    }
}

void shoppingCart::checkout(){
        for(int j=0; j < i; j++) {
            cout << cartContents[j] << "---$" << itemPrices [j] << endl;
        }
}

int main() {

    int a = 0;
    int i;
    int totBeforeTax=0;
    double tax;
    double grandTot;
    //defining output file stream
    ofstream outFS;
    
    cout << "Welcome to Branch Clothing" << endl;
    cout << endl;
    
    shoppingCart newCart; // creating an instance of shopping cart class
    newCart.mainMenu(); // calling main menu FXN inside shopping cart class
    
//open reciept.txt as an output file to store information to
outFS.open("reciept.txt");
    
    //if failed to open, output "could not open file reciept.txt"
    if (!outFS.is_open()) {
        cout << "Could not open file reciept.txt" << endl;
        return 1;
    }
    
    //i is assigned number of elements sored in the cart
    i = newCart.i;
    
    outFS << "Receipt:" << endl; 
    
    //loop to output every item that was bought 
    for(a=0; a<i; a++){
    outFS <<newCart.cartContents[a] << "  $" << newCart.itemPrices[a];
    
    //add each item to total before tax
    totBeforeTax=totBeforeTax + newCart.itemPrices[a]; 
    outFS << endl;
}

    outFS << endl;
    outFS << "Your total before tax is: $" << totBeforeTax << endl << endl;
    
    tax = totBeforeTax * 0.0725;
    
    //drop any extra numbers past 2 decimals
    outFS << fixed << setprecision(2);
    outFS << "Your tax is : $" << tax << endl << endl;
    
    //find grand total
    grandTot = totBeforeTax + tax;
    outFS << "Your grand total is: $" << grandTot;
    
//close output file
outFS.close();
    
    return 0;
}