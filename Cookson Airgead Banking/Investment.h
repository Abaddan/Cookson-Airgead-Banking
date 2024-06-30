// Investment.h
// Author: Jake Cookson
// Date: 6/9/2024
// Description: This file defines the Investment class, which encapsulates the details of an investment, including
// the initial investment amount, monthly deposit amount, annual interest rate, and number of years to invest.

#ifndef INVESTMENT_H
#define INVESTMENT_H

class Investment {
private:
    double initialInvestmentAmount; // Initial investment amount
    double monthlyDeposit; // Monthly deposit amount
    double annualInterest; // Annual interest rate
    int numberOfYears; // Number of years to invest

public:
    Investment(); // Constructor
    double getInitialInvestmentAmount(); // Getter for initial investment amount
    double getMonthlyDeposit(); // Getter for monthly deposit amount
    double getAnnualInterest(); // Getter for annual interest rate
    int getNumberOfYears(); // Getter for number of years to invest
    void setInitialInvestmentAmount(double amount); // Setter for initial investment amount
    void setMonthlyDeposit(double amount); // Setter for monthly deposit amount
    void setAnnualInterest(double interest); // Setter for annual interest rate
    void setNumberOfYears(int years); // Setter for number of years to invest
};

#endif
