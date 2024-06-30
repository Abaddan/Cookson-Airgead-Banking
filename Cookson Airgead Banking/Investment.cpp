// Investment.cpp
// Author: Jake Cookson
// Date: 6/9/2024
// Description: This file implements the Investment class, which stores and manages the details of an investment,
// including the initial investment amount, monthly deposit amount, annual interest rate, and number of years to invest.

#include "Investment.h"

// Constructor initializes all member variables to zero
Investment::Investment() : initialInvestmentAmount(0), monthlyDeposit(0), annualInterest(0), numberOfYears(0) {}

// Getter for the initial investment amount
double Investment::getInitialInvestmentAmount() {
    return initialInvestmentAmount;
}

// Getter for the monthly deposit amount
double Investment::getMonthlyDeposit() {
    return monthlyDeposit;
}

// Getter for the annual interest rate
double Investment::getAnnualInterest() {
    return annualInterest;
}

// Getter for the number of years to invest
int Investment::getNumberOfYears() {
    return numberOfYears;
}

// Setter for the initial investment amount
void Investment::setInitialInvestmentAmount(double amount) {
    initialInvestmentAmount = amount;
}

// Setter for the monthly deposit amount
void Investment::setMonthlyDeposit(double amount) {
    monthlyDeposit = amount;
}

// Setter for the annual interest rate
void Investment::setAnnualInterest(double interest) {
    annualInterest = interest;
}

// Setter for the number of years to invest
void Investment::setNumberOfYears(int years) {
    numberOfYears = years;
}
