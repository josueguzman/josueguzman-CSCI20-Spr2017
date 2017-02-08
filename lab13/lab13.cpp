#include <iostream>
using namespace std;

// computes the future US population

int main () {
    int thisYear = 2017;
    int currentPop = 324463017;       // current US population
    int futureYear = 0;               // future year 
    int yearsInFuture = 0;            // years in future 
    int futureYearPop = 0;            // future population
    
    int bornPerMin = 4 * 1;
    int bornPerHour = bornPerMin * 60; 
    int bornPerDay = bornPerHour * 24;
    int bornPerYear = bornPerDay * 365;
    
    cout << "Enter number of years in future to est. US population:";
    cin >> yearsInFuture;
    futureYear = thisYear + yearsInFuture;
    cout << endl;
    
    cout << "Total US population in "<< futureYear << ":" << endl;

    futureYearPop = bornPerYear * yearsInFuture; 
    futureYearPop = futureYearPop + currentPop;
    cout << futureYearPop;
    
    return 0;
}