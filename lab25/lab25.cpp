/*
Lab 2.5 Lab Classes & Mutator Functions
By Josue Guzman
This program uses "book" class to store & display info about books. 
 */

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Book
{
    // Declaring class variables
    string title;
    string author;
    int copyrightYear;

    void printData()
    {
        cout<<"Book Title::"<<title<<endl;
        cout<<"Book Author::"<<author<<endl;
        cout<<"Book CopyRight Year::"<<copyrightYear<<endl;

    }

public:
    void setData()
    {
        cout<<"Book Meta Data"<<endl;
        cout<<"Enter the title::";
        cin>>title;
        cout<<"Enter the author::";
        cin>>author;
        cout<<"Enter the copyright year::";
        cin>>copyrightYear;
    }

    void getData()
    {
        cout<<"Getting data..."<<endl;
        printData();
    }


};

int main()
{
    Book book; //= new Book();
    book.setData();
    book.getData();
    return 0;

}