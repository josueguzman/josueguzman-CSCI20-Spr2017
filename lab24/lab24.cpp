/* Lab 2.4 Function Returns
   By Josue Guzman
   
   This program has a random # generator that accepts two values, swaps them
   and then uses them to return a # between those values. It also accepts LBS
   and returns the Kilogram equivalent and then returns back to LBS.
 */

#include <iostream>
#include <cstdlib>     
#include <ctime>       
using namespace std;

int randNumGen (int firstNum, int secondNum); //Declaration for random # gen
float poundsToKgs (int pounds); // Declaration for lbs to kg function
float KgsToPounds(float kilos); // declaration for kg to lbs

int randNumGen (int firstNum, int secondNum) { // Definition of the function randNumGen
    int temporaryBucket; // swapping two #s
    temporaryBucket = firstNum; // used to swap the two numbers
    firstNum = secondNum;
    secondNum = temporaryBucket;
    
    // generating random numbers
    srand(time(0));
    int randomNum;
    randomNum = (rand() % firstNum) + secondNum;
    return randomNum;
}

float poundsToKgs (int pounds){ // defining the function that takes lbs as input 
float kilos; //declaring variable kilos as type float
kilos = pounds * 0.453592; // converting lbs to kilos
return kilos; //storing kilos 
}


float KgsToPounds(float kilos) { //define kilos to lbs
    float pounds;
    pounds = kilos/0.453592;
    return pounds;
}

int main() {

int firstNum, secondNum, randomNum; //declaring variables
float pounds, kilos;
    
    //Input from the user
    cout << "Enter the small number" << endl;
    cin >> firstNum;
    cout << "Enter the large number" << endl;
    cin >> secondNum;

    randomNum = randNumGen(firstNum, secondNum); //calling function randomNumGen and saving what it returns in randomNum
    kilos = poundsToKgs(randomNum);
    pounds = KgsToPounds(kilos);

    cout << "Random Number::" << randomNum << endl;
    cout << "Pounds::" << randomNum<< endl;
    cout << "Kilograms::" << kilos<< endl;
    cout << "Final pounds::" << pounds<< endl;
    return 0;
}