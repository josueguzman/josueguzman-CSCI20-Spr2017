/* Assignment 4.0 - Concordance
By: Josue Guzman
Date: May 22, 2017

A concordance is a compendium of words in a particular text. You can select any 
word, using its first letter, find how many times it was used, what works it 
occurred in and the local context of the words it occurred in. Because concordances 
are rather expensive (time wise) to develop, common words such as: the, and, a, etc. 
were ignored.  These are called “stop words”, and stop words are ignored in creating 
the concordance. However, they are included in the local context.  The stop word 
file is provided: english.stop.txt. A preview of the documentView is in a new window.

This program will prompt the user for a text file to analyze.  It uses the provided 
file of stop words – words that will be ignored when it analyzes the file.  After 
creating the concordance, the program prints the concordance results in nicely 
formatted columns to both the screen and an output file.  

For each word in the concordance the program will print: 
- The word
- The total number of occurrences
- The first location of occurrence

*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class wordClass { //class 

private:
    int *wordCount; // word count with pointer
    int *lineCount; // line count with pointer 
    int size; // size
    int stopSize; 
    string *stopText; // object with pointer
    string *words; // object with pointer 

public:
    wordClass(); //constructor
    int getWordCount(string file);
    void readFile(string file); //FXN to read file
    void uploadStopText();      //FXN to use stop text
    void checkRepeatingWords(); //FXN to check for repeating words
    void print(); 
    bool inList(string word, int index); // boolean to see words on list
    bool isWordAllowed(string word); // boolean to see if word is allowed
    
};

    wordClass::wordClass() { //constructors 
    uploadStopText();
}

    void wordClass::readFile(string file) { // FXN to read file
        int count = 0;
        int lineCounter = 1;
        string line;
        string word;
    
    size =  getWordCount(file);
    wordCount = new int[size];
    words = new string[size];
    lineCount = new int[size];
    ifstream infile;
    infile.open(file);
    
    while(!infile.eof()) {
        if(infile.peek() == '\n') {
            lineCounter++;
        }
        
        infile >> word;
        for(int i = 0; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }
        words[count] = word;
        lineCount[count] = lineCounter;
        count++;
    }
    
    infile.close();
}

bool wordClass::inList(string word, int index) { //indicator of words in list 
    for(int i = index + 1; i < size; i++) {
        if(word == words[i])
            return false;
    }
    
    return true;
}

bool wordClass::isWordAllowed(string word) { //indicator of words allowed
    for(int i = 0; i < stopSize; i++) {
        if(stopText[i] == word){
            return false;
        }
    }
    return true;
}

void wordClass::uploadStopText() { // FXN definition for uploading stop text
    int count = 0;
    string word = "english.stop.txt";
    stopSize = getWordCount(word);
    stopText = new string[stopSize];
    ifstream infile;
    infile.open("english.stop.txt");
    while(!infile.eof()) {
        infile >> stopText[count];
        count++;
    }
    
    infile.close();
    
}

int wordClass::getWordCount(string file) { //FXN definition to get word count 
    string word;
    int count = 0;
    ifstream infile;
    infile.open(file);
    while(!infile.eof()) {
        infile >> word;
        count++;
    }
    
    infile.close();
    return count;
}

void wordClass::checkRepeatingWords() { // FXN definition checking words that repeat
    wordCount = new int[size];
    int count = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(words[i] == words[j]) {
               count++;
            }
        }
        
        wordCount[i] = count;
        count = 0;
    }
}

void wordClass::print() {
    for(int i = 0; i < size; i++) { // loop to display words allowed and in list
        if(isWordAllowed(words[i]) == true && inList(words[i], i) == true) {
            cout << "(" << lineCount[i] << ", " << wordCount[i] << ") \t" << words[i] << endl;
        }
    }
}



int main() {
    
    wordClass word;
   
    string file; // user input
        cout << "Enter file name: ";
        cin  >> file;
    
    while(file != "little_miss_muffet.txt") {
        cout << "Enter file name: ";
        cin  >> file;
    }
    
    // print outcome on screen 
    word.readFile(file);
    word.checkRepeatingWords();
    word.print(); 
    
    ofstream outFS; // output file stream
    
    // Open file
    outFS.open("outfile.txt");

    if (!outFS.is_open()){
        cout << "Could not open file outfile.txt." << endl;
        return 1;
    }
    
    // Write outcome to file
    outFS << file << endl;
    
    // Done with file, so close it
    outFS.close();
    
    
    return 0;
}