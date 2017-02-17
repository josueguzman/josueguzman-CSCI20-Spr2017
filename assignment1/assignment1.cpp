// CSCI 20 Assignment 1 - By Josue Guzman
// This program calculates employee wages after taxes and insurance deductions

#include <iostream>
#include <string>           // Supports use of string data type
using namespace std;

struct WorkHrMin {          

    double hourlyRate           = 0.00;
    double hoursWorked          = 0.00;
    double grossPay             = 0.00;
    double netPay               = 0.00;
    double taxes                = 0.17;
    double payMinusIns          = 0.00;
    const double healthIns      = 130;
    string employeeName;  
};
 
int main () {
    
    WorkHrMin employee; 
    
    // User inputs information here:
    
    cout << "Enter Employee's Name: ";
    getline(cin, employee.employeeName);
    cout << "Enter Hours Worked: ";
    cin  >> employee.hoursWorked;
    cout << "Enter Hourly Rate: ";
    cin  >> employee.hourlyRate;
    cout << endl;
    
    // Inputs entered above are calculated here: 
    
    employee.grossPay    = employee.hourlyRate * employee.hoursWorked;
    employee.payMinusIns = employee.grossPay - employee.healthIns;
    employee.netPay      = employee.payMinusIns - (employee.payMinusIns  * employee.taxes);
    
    // Final program output:
    
    cout << "* Wage Slip *" << endl;
    cout << endl;
    cout << "Employee Name: " << employee.employeeName << endl;
    cout << "Pay Rate: $" << employee.hourlyRate   << "/hr." << endl;
    cout << "Hours Worked: " << employee.hoursWorked << endl;
    cout << "Gross Pay: $" << employee.grossPay << endl;
    cout << "Net Pay: $" << employee.netPay << endl;
    cout << endl; 
    cout << "Net Pay was calculated after deducting:" << endl;
    cout << " - $130 for health insurance" << endl;
    cout << " - 17% in income taxes" << endl;
    
}