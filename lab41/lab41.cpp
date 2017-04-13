/* Lab 4.1 - Single Arrays
 * Created by Josue Guzman
 * April 11, 2017

 * This program creates a class called ArrayTools which stores a single integer array and each of the following functions.  
 * It uses the main FXN created by April. 
 * Print – print the array values on the screen in order
 * Find_min/max – search the array between two sizes to return the location of the minimum value in that part of the array
 * Find_sum – return the sum of all values in the array
 * Num_even/odd – count the number of even and odd numbers in the array
 * Search – search the array for a specified value and return the location if the value is found and -1 otherwise
 * Is_sorted – check to see of the array is sorted in ascending order.
 */

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 10;

class ArrayTools {
    
    public:
        
    ArrayTools();                           //default contructor
    ArrayTools(int elements[]) {
        
        for (int i=0; i<SIZE; i++) {
        private_array[i] = elements[i]; } }
    
        void Print() {                      //Print – print the array values on the screen in order
            for (int i=0; i<SIZE; i++) {
            cout << private_array[i] << endl; } }
    
        int Find_min (int n1, int n2) {     //Find_min – returns the location of the minimum value in that part of the array
            int MIN = private_array[0];
            for (int i=n1; i<n2; i++) {
            if (private_array[i]<MIN) {
            MIN = private_array[i]; } } }
    
        int Find_max (int n1, int n2) {     //Find_max – eturns the location of the minimum value in that part of the array
            int MAX = private_array[0];
            for (int i=n1; i<n2; i++) {
            if (private_array[i]<MAX) {
            MAX = private_array[i]; } } }
    
        int Find_sum(){                     //Find_sum – return the sum of all values in the array
            int SUM;
            for (int i=0; i<SIZE; i++) {
            SUM = SUM + private_array[i]; } }
    
        int Search (int UserNum) {          //Search – search the array for a specified value and return the location if the value is found and -1 otherwise
            cout << "key in a number between 1-10" << endl;
            cin  >> UserNum;
            for (int i=0; i<SIZE; i++) {
            if (private_array[i] == UserNum) {
            cout << UserNum << endl; } }
            return -1; }
    
        string Is_sorted() {                //Is_sorted – check to see of the array is sorted in ascending order.
            for (int i=0; i<SIZE; i++) {
            if (private_array[i] > private_array[i -1]) {
                return "False"; } } }
    
        // Num_even/odd – count the number of even and odd numbers in the array - left pending 

    private: 
        int private_array[SIZE];
     
};


int main() {
    
    cout << "Key in numbers 1 through 10" << endl;
    
    int myArray[SIZE];
    for (int i = 0; i<SIZE;i++) {
    cin  >> myArray[i]; }
    cout << endl;
    
    ArrayTools a(myArray);  //user created object of type ArrayTools and 'a' is the object 
    
    a.Print();
    cout <<"Min: "      << a.Find_min(0, 4) <<endl;
    cout <<"Max: "      << a.Find_max(5, 10)<<endl;
    cout <<"Sum = "     << a.Find_sum()     <<endl;
    cout <<"Search 10"  << a.Search(10)     <<endl;
    cout <<"Sorted? "   << a.Is_sorted()    <<endl;
    
    return 0;
}