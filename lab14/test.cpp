#include <iostream>
using namespace std;

int main () {
    int quarters                = 0;
    int dimes                   = 0;
    int nickels                 = 0;
    int pennies                 = 0;
    double coinsIn              = 0;
    int balanceInDollars        = 0;
    int customerBalance         = 0;
    double newCustomerBalance   = 0.0;
    double machineFee           = 0.109;
    double fee                  = 0.0;
    double totalInDollars       = 0.0;
    
    cout << "Enter amount of cents" << endl;
    cin >> coinsIn;
    cout << endl;
    cout << "You have entered " << coinsIn << " cents." << endl;
    cout << endl;
    
    totalInDollars      = (coinsIn / 100);
    fee                 = (totalInDollars * machineFee);
    newCustomerBalance  = (totalInDollars - fee);
    
    cout << "That was " << quarters << " quarter(s), " << dimes << " dime(s), ";
    cout << nickels << " nickel(s) and " << pennies << " pennies." << endl;
    cout << "After fee, your grand total is $" << newCustomerBalance << ".";
    cout << endl;
    
    cout << "totalInDollars" << totalInDollars;
    cout << endl;
    cout << "fee" << fee;
    cout << endl;
    cout << "newCustomerBalance" << newCustomerBalance << endl;
    
}