/* Lab 4.2 - Parallel Arrays
 * Created by Josue Guzman
 * April 13, 2017

 This program mimics an online shopping cart.  As proprietor of an online shop 
 this program is designed to keep track of inventory, price and the user’s shopping cart.  
 There's a menu of 10 items for the user to choose from.  Each item has a price.  As the 
 user purchases an item, the program removes that item from inventory (by subtracting 1) 
 and adds the price to a total.  When the user is done adding items to their cart, the 
 program outputs a statement of what they have ordered and the total cost of their 
 purchases.  Inventory cannot go below 0.
 */

#include <iostream>
#include <string>
using namespace std;

    const int STORE = 10;
   

class ShoppingCart {
    
    public:
    
    int total() { // cost of items
        int total;
        for (int i=0; i<STORE; ++i) {
            total = total + (FinalCart[i] * FinalPrice[i]);
        }
        return total;
    }
    
    int list() { // list of items
        int list;
        for (int i=0; i<STORE; ++i) {
            list = FinalCart[STORE]++;
        }
        return list;
    }
    
    string receipt() { //experimental
        string receipt;
        for (int i=0; i<STORE; ++i) {
            receipt = FinalReceipt[STORE]++;
            cout << receipt << endl;
        }
        return receipt;
    }
    
    
    void add(int item) { // Keeps track of inventory and reports when item is out of stock
        if (FinalList[item] <= 0) {
            cout << "out of stock" << endl;
        }
        else {
            invent[item]--;
            FinalCart[item]++;
               
        }
        return;
    }
    
    int i;                  
    ShoppingCart(int price[], int invent[], int cart[]) {   // Constructor 
        for (i=0; i<STORE; ++i) {
            FinalPrice[i] = price[i];
            FinalCart[i] = cart[i];
            FinalList[i] = invent[i];
        }
    return;
    } 
    
    private:
    int invent[STORE];
    int FinalCart[STORE];
    int FinalPrice[STORE];
    int FinalList[STORE];
    int FinalReceipt[STORE];
    
};

int main () {
    int StoreItem;
    int invent[STORE] = {3, 3, 3, 33, 20, 3, 3, 3, 3, 3}; // lists items in inventory 
    int cart[STORE]   = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // lists how many items are in the user's shopping cart
    int price[STORE]  = {20, 25, 30, 35, 36, 40, 50, 53, 65, 67}; // lists prices for each item
    string receipt[STORE] = {"Red Hat", "White Hat", "Black Hat", "Red Shirt", "White Shirt", "Black Shirt", "Jeans", "Wallet", "Hoodie"};

    ShoppingCart sCart (price, invent, cart); 
    
    cout << "Welcome to CSCI's Online Store" << endl;
    cout << "Check out our list of items for sale: " << endl;
    cout << endl;
    cout << " 1) Red Hat:       $20" << endl; // list of items for sale
    cout << " 2) White Hat:     $25" << endl;
    cout << " 3) Black Hat:     $30" << endl;
    cout << " 4) Red shirt:     $35" << endl;
    cout << " 5) White shirt    $36" << endl;
    cout << " 6) Black shirt:   $40" << endl;
    cout << " 7) Jeans:         $50" << endl;
    cout << " 8) Wallet:        $53" << endl;
    cout << " 9) Black walllet: $65" << endl;
    cout << "10) Black hoodie:  $67" << endl;
    cout << endl;
    
    cout << "To start shopping!  Enter any item number: " << endl; // prompts the user to start shopping
    cout << "When done, press 'q' " << endl;
    cout << endl;
    cin  >> StoreItem;
    
    while (StoreItem != 0) {
        StoreItem--;
        if (StoreItem < 0 || StoreItem > 9) { // gets user back on track when a number outside the domain is used
            cout << "Keyed item not in store.  Try again!"  << endl;
            }
    
    sCart.add(StoreItem);
    cout << "Enter item number to add to shopping cart" << endl; // prompts user to continue shopping
    cin  >> StoreItem;
    }
    
    cout << "Sub Total: $" << sCart.total() << endl; // prints out total amount owed
    cout << "Shopping Cart (No tax and free shipping):" << endl;
    for (int i = 0; i < STORE; i++) {
        if (sCart.list() != 0) { //call shopping cart 
            cout << sCart.list() << ") $" << sCart.list() << endl;
            
        }
    }
    cout << endl;
    cout << "Grand Total: $" << sCart.total() << endl; // prints out total amount owed
    cout << "Thanks for shopping with us!  Have a nice day" << endl;
    
    return 0;
}
    
    
    
    
    
    
    
    

