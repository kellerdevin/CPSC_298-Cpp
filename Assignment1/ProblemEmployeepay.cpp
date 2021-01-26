#include <iostream>
#include <iomanip>
using namespace std;


int main() 
{
    cout << endl;
    cout << "Enter number of hours worked in a week: ";
    
    double hoursPerWeek;

    double wage = 16.00;

    cin >> hoursPerWeek;

    //Calculate Overtime
    if (hoursPerWeek > 40)
    {
        const double OVERTIME = 1.50 * wage;
        double hoursOvertime = hoursPerWeek - 40;
        double overtimePay = hoursOvertime * OVERTIME;
    }
    double grossPay;
    grossPay = (wage * hoursPerWeek) + double(wage);
    

    cout << fixed << setprecision(2)  << "Gross pay: $" << double(grossPay) << endl << endl;

    //create taxes
    double socialSecurityTax = 0.06 * grossPay;
    double federalIncomeTax = 0.14 * grossPay;
    double stateIncomeTax = 0.05 * grossPay;
    double medicalInsurance = 10.00;

    cout << "Amount that goes to Social Security: $" << socialSecurityTax << endl;
    cout << "Amount that goes to Federal Income Tax: $" << federalIncomeTax << endl;
    cout << "Amount that goes to State Income Tax: $" << stateIncomeTax << endl;
    cout << "Amount that goes to Medical Insurance: $" << medicalInsurance << endl << endl;

    float takeHomePay = grossPay - socialSecurityTax - federalIncomeTax - stateIncomeTax - medicalInsurance;

    cout << "Net take-home pay for the week: $" << takeHomePay << endl << endl;
    return 0;
}

