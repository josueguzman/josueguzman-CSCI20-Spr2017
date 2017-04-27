/* Lab 4.5 - String
 * Created by Josue Guzman
 * April 27, 2017

 This program creates user names for a new website the user has you have created.  
 It accepts a first name of up to 10 characters and a last name 
 of up to 20 characters.  It tells the user if the name is larger than the 
 max size.  It also determines if the names are the same and outputs a warning.  
 At the end, it creates three different user name options 
 
 This program will not use C strings at all!
 
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
   string first;
   string last;
   string greetingText;
   string insert;
   int itemIndex = 0;

    greetingText = "Welcome "; //string to greet user 

   //prompt user for string input of first and last names
    cout << "Enter your first name (1-10 characters max): ";
    cin  >> first;
    cout << endl;
    cout << "Enter your last name (1-20 characters max): ";
    cin  >> last;
    cout << endl;

    while (first.size() > 10) { //loop to warn user of exceeding 10 characters
        cout << "Try again! First name cannot exceed 10 characters" << endl;
        cin >> first;
    }
    
    while (first.size() > 20) { //loop to warn user of exceeding 20 characters
        cout << "Try again! Last name cannot exceed 20 characters" << endl;
        cin >> last;
    }
    
    while (first == last) { //loop to telling user that first and last names can't be the same
        cout << "Try again! First and last names cannot be the same" << endl;
        cin >> last;
    }
   
    //first.insert(0, "Mr./Ms. ");
    cout << first << " " << last << ", " << "Which of these user names would you like to use?" << endl; // Ask user which name he/she prefers
    cout << endl;
    cout << "1) " << first << last << endl;
    cout << "2) " << first[0] << last[1] << endl;
    cout << "3) " << first[0] << last[1] << last << endl;
    cout << "4) " << first.insert(0, "Mr./Ms.")[0] << last[1] << last << endl;
   

   return 0;
}