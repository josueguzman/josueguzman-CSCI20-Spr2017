/* Lab 4.4 - C Strings
 * Created by Josue Guzman
 * April 20, 2017

 This program creates user names for a new website the user has you have created.  
 It accepts a first name of up to 10 characters and a last name 
 of up to 20 characters.  It tells the user if the name is larger than the 
 max size.  It also determines if the names are the same and outputs a warning.  
 At the end, it creates three different user name options 
 
 */

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char first[10];
    char last[20]; 
    int i = 0;
    
    //prompt user for string input of first and last names
    cout << "Enter your first name (1-10 characters max): ";
    cin  >> first;
    cout << endl;
    cout << "Enter your last name (1-20 characters max): ";
    cin  >> last;
    cout << endl;
    
    while (strlen(first) > 10) { //loop to warn user of exceeding 10 characters
        cout << "Try again! First name cannot exceed 10 characters" << endl;
        cin >> first;
    }
    
    while (strlen(last) > 20) { //loop to warn user of exceeding 20 characters
        cout << "Try again! Last name cannot exceed 20 characters" << endl;
        cin >> last;
    }
    
    while (strcmp(first, last) == 0) { //loop to telling user that first and last names can't be the same
        cout << "Try again! First and last names cannot be the same" << endl;
        cin >> last;
    }
    
    cout << first << " " << last << ", " << "Which of these user names would you like to use?" << endl; // Ask user which name he/she prefers
    cout << endl;
    cout << "1) " << first << last << endl;
    cout << "2) " << first[0] << last[0] << endl;
    cout << "3) " << first[i] << last[i] << last << endl;
    
    return 0;
}