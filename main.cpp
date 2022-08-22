#include <iostream>
#include <limits>
#include "Banking.h"

using namespace std;

int main() {
    while (true) {
        cout << "*************************************" << endl;
        cout << "*************Data Input**************" << endl;
        cout << "Initial Investment Amount: " << endl;
        cout << "Monthly Deposit: " << endl;
        cout << "Annual Interest: " << endl;
        cout << "Number of years: " << endl;
        system("PAUSE");
        cout << endl;
        cout << "*************************************" << endl;        
        cout << "*************Data Input**************" << endl;        
        cout << "Initial Investment Amount: $";
        double investment, monthlyDepo, interestRate;  
        int years;
        cin >> investment;
        cout << "Monthly Deposit: $";
        cin >> monthlyDepo;
        cout << "Annual Interest: %";        
        cin >> interestRate;        
        cout << "Number of years: ";        
        cin >> years;        
        system("PAUSE");        

        Banking banks = Banking(investment, monthlyDepo, interestRate, years);        
        cout << endl;        
        
        banks.rprtNoMonthlyDepos();        
        cout << endl;        
        
            if (monthlyDepo > 0) {            
                banks.rprtWithMonthlyDepos();        
            }        
 
        cout << endl << "Do you wish to perform another calculation? (y/n): ";        
        string choice;        
        cin >> choice;
            if (choice != "y") {            
                break;        
                }        
            cout << endl;    
        }    
    return 0;
}