// Lab 1.6 - Objects - By Josue Guzman
// This program allows users to create monsters with special characteristics 
// The purpose of this lab is to apply structs in a program

#include <iostream>
#include <string>
using namespace std;

struct MonsterSt {
    string name;
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
};

int main () {
    
    MonsterSt monster1;
    monster1.name   = "Monster1";
    monster1.head   = "Zombus";
    monster1.eyes   = "Spritem";
    monster1.ears   = "Vegitas";
    monster1.nose   = "None";
    monster1.mouth  = "Wackus";
    
    MonsterSt monster2;
    monster2.name   = "Monster2";
    monster2.head   = "Zombus";
    monster2.eyes   = "Zombus";
    monster2.ears   = "None";
    monster2.nose   = "Zombus";
    monster2.mouth  = "Zombus";
    
    MonsterSt monster3;
    monster3.name   = " ";
    monster3.head   = " ";
    monster3.eyes   = " ";
    monster3.ears   = " ";
    monster3.nose   = " ";
    monster3.mouth  = " "; 
    
    MonsterSt monster4;
    monster4.name   = " ";
    monster4.head   = " ";
    monster4.eyes   = " ";
    monster4.ears   = " ";
    monster4.nose   = " ";
    monster4.mouth  = " "; 
    
    // Output created monsters as samples for the user
    
    cout << "Sample Monsters: " << endl;
    cout << monster1.name  << ": ";
    cout << monster1.head  << ", ";
    cout << monster1.eyes  << ", ";
    cout << monster1.ears  << ", ";
    cout << monster1.nose  << ", ";
    cout << monster1.mouth << endl; 

    cout << monster2.name  << ": ";
    cout << monster2.head  << ", ";
    cout << monster2.eyes  << ", ";
    cout << monster2.ears  << ", ";
    cout << monster2.nose  << ", ";
    cout << monster2.mouth << endl;
    cout << endl;
    
    // Prompt the user to create their own monsters
    
    cout << "To create your own monster, follow the prompts below." << endl;
    cout << "Choose from the following characteristics:" << endl;
    cout << "Zombus, Spritem, Vegitas and Wackus" << endl;
    cout << endl;
    
    cout << "Enter your monster's name:" << endl;
    cin  >> monster3.name;
    cout << "Enter type of head:" << endl;
    cin  >> monster3.head;
    cout << "Enter type of eyes:" << endl;
    cin  >> monster3.eyes;
    cout << "Enter type of ears:" << endl;
    cin  >> monster3.ears;
    cout << "Enter type of nose:" << endl;
    cin  >> monster3.nose;
    cout << "Enter type of mouth:" << endl;
    cin  >> monster3.mouth;
    cout << endl;

// user input monster (3)

    cout << monster3.name << ": ";
    cout << monster3.head << ", ";
    cout << monster3.eyes << ", ";
    cout << monster3.ears << ", ";
    cout << monster3.nose << ", ";
    cout << monster3.mouth << endl;
    cout << endl;

// prompt the user to create another monster (4)

    cout << "To create another monster, follow the prompts below." << endl;
    cout << "Choose from the following characteristics:" << endl;
    cout << "Zombus, Spritem, Vegitas and Wackus" << endl;
    cout << endl;
    
    cout << "Enter your monster's name:" << endl;
    cin  >> monster4.name;
    cout << "Enter type of head:" << endl;
    cin  >> monster4.head;
    cout << "Enter type of eyes:" << endl;
    cin  >> monster4.eyes;
    cout << "Enter type of ears:" << endl;
    cin  >> monster4.ears;
    cout << "Enter type of nose:" << endl;
    cin  >> monster4.nose;
    cout << "Enter type of mouth:" << endl;
    cin  >> monster4.mouth;
    cout << endl;

// user input monster (4)

    cout << monster4.name << ": ";
    cout << monster4.head << ", ";
    cout << monster4.eyes << ", ";
    cout << monster4.ears << ", ";
    cout << monster4.nose << ", ";
    cout << monster4.mouth;
    cout << endl;
    
}