/* Assignment 2
 * Created By: Josue Guzman
 * Created On: March 23, 2017
 * This program will run a currency converter using dollars, euros, bitcoin & yuan.
 */

#include<iostream>
using namespace std;

class currencyConverter {
    
    public:
    void SetFromDollars(double input);
    double GetFromDollars();
    
    void SetFromEuros(double input);
    double GetFromEuros();
    
    void SetFromBitcoin(double input);
    double GetFromBitcoin();
    
    void SetFromYuan(double input);
    double GetFromYuan();
    
    void PrintCurrency();
    currencyConverter();
    currencyConverter(double input);
    
    private:
    double dollars_;
};
void currencyConverter::SetFromDollars(double input) { //set the value in Dollars
    dollars_ = input;
}
double currencyConverter::GetFromDollars() { //get the value in Dollars
    return dollars_;
}
void currencyConverter::SetFromEuros(double input) { //sets a value in Euros
    dollars_ = input * 0.93; //converts from Euros to Dollars (1 dollar = 0.93 Euros)
}
double currencyConverter::GetFromEuros() { //get the value in Euros
    return (dollars_ / 0.93);
}
void currencyConverter::SetFromBitcoin(double input) { //sets a value in Bitcoin
    dollars_ = input * 0.001;  //converts from Bitcoin to Dollars 
}
double currencyConverter::GetFromBitcoin() { //get the value in Bitcoin
    return (dollars_ / 0.001);
}
void currencyConverter::SetFromYuan(double input) { //sets a value in Yuan
    dollars_ = input * 0.15; //converts from Yuan to Dollars 
}
double currencyConverter::GetFromYuan() { //get the value in Yuan
    return (dollars_ / 0.150);
}

void currencyConverter::PrintCurrency() {
    cout << "Dollars: " << GetFromDollars() << endl;
    cout << "Yuan: "    << GetFromYuan()    << endl;
    cout << "Bitcoin: " << GetFromBitcoin() << endl;
    cout << "Euros: "   << GetFromEuros()   << endl;
    
}
currencyConverter::currencyConverter() {
    dollars_ = 0;
}
currencyConverter::currencyConverter(double input) {
    dollars_ = input;
}
int main () {
   
    currencyConverter currency1; //default constructor
    currencyConverter currency2(100); //overloaded constructor
    
    cout << "Default constructor with no value::" << endl;
    currency1.PrintCurrency();
    cout << " " << endl;
    
    cout << "Overloaded constructor with value of $100 Dollars::" << endl;
    currency2.PrintCurrency();
    cout << " " << endl;
    
    cout << "Amount of Dollars::";
    currency1.SetFromDollars(1); //testing mutator function
    cout << currency1.GetFromDollars()<<endl; //testing accessor function
    currency1.PrintCurrency();
    cout << " " << endl;
    
    cout << "Amount of Dollars::";
    currency1.SetFromDollars(10000000); //testing mutator function
    cout << currency1.GetFromBitcoin()<<endl; //testing accessor function
    currency1.PrintCurrency();
    cout << " " << endl;
    
    cout << "Amount of Bitcoin::";
    currency2.SetFromBitcoin(1);
    cout << currency2.GetFromDollars()<<endl;
    currency2.PrintCurrency();
    cout << " " << endl;
    
    cout << "Amount of Euros::";
    currency2.SetFromYuan(6748.72);
    cout << currency2.GetFromYuan()<<endl;
    currency2.PrintCurrency();
    cout << " " << endl;
    
    return 0;
}