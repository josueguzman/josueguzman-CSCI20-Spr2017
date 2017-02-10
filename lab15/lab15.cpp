// Mad Libs - Lab 15
// Created on Feb 9, 2017 By Josue Guzman
// The purpose of this program is to create a mad lib for an imaginary awards show

#include <iostream>
#include <string>
using namespace std;

int main() 

{

    string awardsType;
    string exclamationWord;
    string awardsName;
    string firstCategory;
    string secondCategory;
    
    cout << "Enter your favorite word:" << endl;
    cin  >> awardsType;
    cout << endl;
    cout << "Enter a word that you associate with excitement:" << endl;
    cin  >> exclamationWord;
    cout << endl;
    cout << "What's your name?" << endl;
    cin  >> awardsName;
    cout << endl;
    cout << "If this was an awards show, what category would you want to honor? Best...";
    cin  >> firstCategory;
    cout << endl;
    cout << "If this was an awards show, what other category would you want to honor? Best...";
    cin  >> secondCategory;
    cout << endl;
    
    cout << "Welcome to the 89th Annual " << awardsName << " " << awardsType << " Awards Show!" << endl;
    cout << exclamationWord << "! " << "It's the awards show you've been waiting for all year!" << endl;
    cout << "This year we're honoring Best " << firstCategory;
    cout << " and Best " << secondCategory << ".";
    cout << " We hope you enjoy the show!";
    
    return 0;
}