/* Lab 26
 * Created By: Josue Guzman
 * Created On: March 21, 2017
 * This program will run the Temperature Converter Class
 */
 
#include<iostream>
using namespace std;
class TemperatureConverter {
    
    public:
    void SetTempFromKelvin(double input);
    double GetTempFromKelvin();
    void SetTempFromCelsius(double input);
    void SetTempFromFahrenheit(double input);
    double GetTempAsCelsius();
    double GetTempAsFahrenheit();
    void PrintTemperatures();
    TemperatureConverter();
    TemperatureConverter(double input);
    
    private:
    double kelvin_;
};

void TemperatureConverter::SetTempFromKelvin(double input) { //set the value in kelvin
    kelvin_ = input;
}

double TemperatureConverter::GetTempFromKelvin() { //get the value in kelvin
    return kelvin_;
}

void TemperatureConverter::SetTempFromCelsius(double input) { //sets a value in Celsius and converts it
    kelvin_ = input + 273.15; //to kelvin
}

void TemperatureConverter::SetTempFromFahrenheit(double input) { //sets a value in Fahrenheit and converts
    kelvin_ = (5 * (input - 32) / 9) + 273.15;  //to kelvin
}

double TemperatureConverter::GetTempAsCelsius() { //get the value in Celsius
    return (kelvin_ - 273.15);
}

double TemperatureConverter::GetTempAsFahrenheit() { //get the value in Fahrenheit
    return ((GetTempAsCelsius() * 9) / 5 + 32);
}

void TemperatureConverter::PrintTemperatures() {
    cout << "In Kelvin: "  << GetTempFromKelvin() << endl;
    cout << "In Celsius: " << GetTempAsCelsius() << endl;
    cout << "In Fahrenheit: " << GetTempAsFahrenheit() << endl;
}

TemperatureConverter::TemperatureConverter() {
    kelvin_ = 0;
}

TemperatureConverter::TemperatureConverter(double input) {
    kelvin_ = input;
}

int main () {
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    cout << "Default constructor with no value::" << endl;
    
    temp1.PrintTemperatures();
    cout << " " << endl;
    cout << "Overloaded constructor with value 274::" << endl;
    temp2.PrintTemperatures();
    cout << " " << endl;
    cout << "Starting with Kelvin::";
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout << temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    cout << " " << endl;
    cout << "Starting with Celsius::";
    temp2.SetTempFromCelsius(32); //testing other functions
    cout << temp2.GetTempAsCelsius()<<endl;
    
    temp2.PrintTemperatures();
    cout << " " << endl;
    cout << "Starting with Fahrenheit::";
    
    temp2.SetTempFromFahrenheit(33);
    cout << temp2.GetTempAsFahrenheit()<<endl;
    
    temp2.PrintTemperatures();
    return 0;
}