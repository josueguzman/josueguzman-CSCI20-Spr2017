// lab14 - Coinstar Machine - By Josue Guzman

#include <iostream>
using namespace std;

int main () {
    int quarters                = 0;
    int dimes                   = 0;
    int nickels                 = 0;
    int pennies                 = 0;
    int coinsIn                 = 0;
    double machineFee           = 0.109;
    double newCustomerBalance   = 0.0;
    double fee                  = 0.0;
    double totalInDollars       = 0.0;
    
    cout << "Enter amount of cents" << endl;
    cin >> coinsIn;
    cout << endl;
    cout << "You entered " << coinsIn << " cents." << endl;
    cout << endl;
    
    totalInDollars      = coinsIn / 100.00;
    fee                 = totalInDollars * machineFee;
    newCustomerBalance  = totalInDollars - fee;
    
    quarters            = coinsIn / 25;
    coinsIn             = coinsIn % 25;
    dimes               = coinsIn / 10;
    coinsIn             = coinsIn % 10;
    nickels             = coinsIn / 5;
    coinsIn             = coinsIn % 5;
    pennies             = coinsIn / 1;
    
    cout << "That's " << quarters << " quarter(s), " << dimes << " dime(s), ";
    cout << nickels << " nickel(s) and " << pennies << " pennies." << endl;
    cout << "The total is $" << totalInDollars << endl;
    cout << endl;
    cout << "After the fee, your grand total is $" << newCustomerBalance << ".";
    
}