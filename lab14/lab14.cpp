#include <iostream>
using namespace std;

int main () {
    int quarters                = 0;
    int dimes                   = 0;
    int nickels                 = 0;
    int pennies                 = 0;
    int coinsIn                 = 0;
    int balanceInDollars        = 0;
    int customerBalance         = 0;
    double newCustomerBalance   = 0.0;
    double machineFee           = 0.109;
    double totalInDollars       = 0.0;
    
    cout << "Enter amount of cents" << endl;
    cin >> coinsIn;
    cout << endl;
    cout << "You have entered " << coinsIn << " cents." << endl;
    cout << endl;
    
    totalInDollars      = coinsIn / 100;
    newCustomerBalance  = totalInDollars * machineFee;
    newCustomerBalance  = totalInDollars - newCustomerBalance;
    
    quarters            = coinsIn / 25;
    coinsIn             = coinsIn % 25;
    dimes               = coinsIn /10;
    coinsIn             = coinsIn % 10;
    nickels             = coinsIn / 5;
    coinsIn             = coinsIn % 5;
    pennies             = coinsIn /1;
    
    cout << "That was " << quarters << " quarter(s), " << dimes << " dime(s), ";
    cout << nickels << " nickel(s) and " << pennies << " pennies." << endl;
    cout << "After fee, your grand total is $" << newCustomerBalance << ".";
    
    
}