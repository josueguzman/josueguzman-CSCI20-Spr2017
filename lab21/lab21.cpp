/*  This program will output info about windchills, based on user inputs
    of temp and wind speed.  The program will tell the user the windchill
    based on the old formula, the new formula and the difference.
    
    Lab: 2.1 / By: Josue Guzman / Date: 2-21-17
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

double velocity;    // declaration of windspeed
double oldWC;       // declaration of old style windchill formula   
double newWC;       // declaration of new style windchill formula
double temp;        // declaration of temperature 
double diff;        // declaration of difference of new and old formulas

cout << "Enter temp in (F):";
cin  >> temp;
cout << "Enter windspeed in (MPH):";
cin  >> velocity;
cout << endl;

oldWC = (0.081) * (3.71 * sqrt(velocity) + 5.81 - 0.25 * velocity) * (temp - 91.4) + 91.4;
newWC = 35.74 + 0.6215 * temp - 35.75 * pow(velocity, 0.16) + 0.4275 * temp * pow(velocity, 0.16);
diff = oldWC - newWC;

cout << "Old Style Wind Chill: " << oldWC << '\n';
cout << "New Style WInd Chill: " << newWC << '\n';
cout << "Difference: " << diff << '\n';

}

