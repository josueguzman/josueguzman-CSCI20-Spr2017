/* this program generates numbers from 0 to 100.
 * It uses rand() % 100 to generate the numbers.
 * Lab 2.2 | Created By: Josue Guzman | Date: 2/23/17
 */

#include <iostream>
#include <cstdlib>     // allows the use of the rand() function
#include <ctime>       // allows the use of the time() function
using namespace std;

int main() {
   
   srand(time(0));     

   cout << "This program generates random numbers." << '\n';
   cout << "Hit the RUN button continuosly to get new numbers:" << '\n';
   cout << ((rand() % 100) + 1) << '\n';

}