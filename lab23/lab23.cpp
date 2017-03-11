/* Lab 2.3 | Created By: Josue Guzman | Date: 3/10/17
 * This program promps user to enter 2 #s, swaps them, and generates a # between them
 */

#include <iostream>
#include <cstdlib>     
#include <ctime>       
using namespace std;

void RandomNumGen (int num1, int num2); // Declaration 

void swap (int& num1, int& num2); // Declaration

void RandomNumGen(int num1, int num2) // Definition

{ 
    swap (num1, num2); // swapping two values using function swap
    srand(time(0));
    cout << (rand() % num1) + num2 <<endl;
}

void swap (int& num1, int& num2) // Definition
{
    int temporaryBucket; // uses a third bucket to store numbers temporarily 
    temporaryBucket = num1;
    num1 = num2;
    num2 = temporaryBucket;
    return;
}

int main() {
    
int smallNum;
int largeNum;

cout << "Enter small number: ";
cin  >> smallNum;
cout << "Enter large number: ";
cin  >> largeNum;

RandomNumGen(smallNum, largeNum); // Calling the fuction
    
    return 0;
}

