#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int *wordCount;
int *lineCount;
int size;
int stopSize;
string *stopText;
string *words;
void readFile(string file);
bool inList(string word, int index);
bool isWordAllowed(string word);
void uploadStopText();
int getWordCount(string file);
void checkRepeatingWords();
void print();

int main()
{
    string file;
    cout << "Enter file name it read -> ";
    cin >> file;
    while(file != "little_miss_muffet.txt")
    {
        cout << "Enter file name it read -> ";
        cin >> file;
    }
    uploadStopText();
    readFile(file);
    checkRepeatingWords();
    print();
    return 0;
}
void readFile(string file)
{
    int count = 0;
    string line;
    string word;
    int lineCounter = 1;
    size =  getWordCount(file);
    wordCount = new int[size];
    words = new string[size];
    lineCount = new int[size];
    ifstream infile;
    infile.open(file);
    while(!infile.eof())
    {
        if(infile.peek() == '\n')
        {
            lineCounter++;
        }
        infile >> word;
        for(int i = 0; i < word.length(); i++)
        {
            word[i] = tolower(word[i]);
        }
        words[count] = word;
        lineCount[count] = lineCounter;
        count++;
    }
    infile.close();
}
bool inList(string word, int index)
{
    for(int i = index + 1; i < size; i++)
    {
        if(word == words[i])
            return false;
    }
    return true;
}
bool isWordAllowed(string word)
{
    for(int i = 0; i < stopSize; i++)
    {
        if(stopText[i] == word)
        {
            return false;
        }
    }
    return true;
}
void uploadStopText()
{
    int count = 0;
    string word = "english.stop.txt";
    stopSize = getWordCount(word);
    stopText = new string[stopSize];
    ifstream infile;
    infile.open("english.stop.txt");
    while(!infile.eof())
    {
        infile >> stopText[count];
        count++;
    }
    infile.close();
/*
    for(int i = 0; i < count; i++)
    {
        cout << stopText[i] << endl;
    }
    cout << "*****************************" << endl;
    cout << endl;
*/
}
int getWordCount(string file)
{
    string word;
    int count = 0;
    ifstream infile;
    infile.open(file);
    while(!infile.eof())
    {
        infile >> word;
        count++;
    }
    infile.close();
    return count;
}
void checkRepeatingWords()
{
    wordCount = new int[size];
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(words[i] == words[j])
            {
                count++;
            }
        }
        wordCount[i] = count;
        count = 0;
    }
}
void print()
{
    for(int i = 0; i < size; i++)
    {
        if(isWordAllowed(words[i]) == true && inList(words[i], i) == true)
        {
            cout << "(" << lineCount[i] << ", " << wordCount[i] << ") \t" << words[i] << endl;
        }
    }
}