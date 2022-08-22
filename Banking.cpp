#include <iomanip>
#include <iostream>
#include "Banking.h"
using namespace std;

Banking::Banking(double investment, double monthDeposit, double rate, int years) {    
    this->initialDepo = investment;    
    this->monthlyDepo = monthDeposit;    
    this->interestRate = rate;    
    this->numYears = years;
    }
    
    Banking::~Banking() {}
   
    void Banking::rprtNoMonthlyDepos() {    
          
        cout << "   Balance and Interest Without Additional Monthly Deposits" << endl;    cout << "==========================================================================" << endl;    
          
        cout << setw(10) << "Year"        << setw(20) << "Year End Balance"        << setw(35) << "Year End Earned Interest Rate" << endl;    
        cout << "--------------------------------------------------------------------------" << endl;
           
        int currentYear = 1;    
        double yearEndBalance = this->initialDepo;    
        while (currentYear <= this->numYears) {        
                   
            double interestEarned = yearEndBalance * this->interestRate / 100;        
                  
            yearEndBalance += interestEarned;        
                    
            cout << right << setw(10) << currentYear << fixed << setprecision(2)            << setw(20) << yearEndBalance            << setw(35) << interestEarned << endl;        
                   
            currentYear++;    }
            }
     
    void Banking::rprtWithMonthlyDepos() {    
        
        cout << "   Balance and Interest With Additional Monthly Deposits" << endl;    
        cout << "==========================================================================" << endl;    
        
        cout << setw(10) << "Year"        << setw(20) << "Year End Balance"        << setw(35) << "Year End Earned Interest Rate" << endl;    
        cout << "--------------------------------------------------------------------------" << endl;
           
        int currentYear = 1;    
        double yearEndBalance = this->initialDepo;    
        while (currentYear <= this->numYears) {        
              
        int month = 1;       
        double interestEarned = 0.0;        
        double monthEndBalance = yearEndBalance;        
        while (month <= 12) {            
                     
            monthEndBalance += this->monthlyDepo;            
                  
            double monthlyInterest = monthEndBalance * this->interestRate / (100 * 12);            
                        
            interestEarned += monthlyInterest;            
            monthEndBalance += monthlyInterest;           
            month++;        
            }        
               
        yearEndBalance = monthEndBalance;        
               
        cout << right << setw(10) << currentYear << fixed << setprecision(2)            << setw(20) << yearEndBalance            << setw(35) << interestEarned << endl;
             
        currentYear++;    
        }
