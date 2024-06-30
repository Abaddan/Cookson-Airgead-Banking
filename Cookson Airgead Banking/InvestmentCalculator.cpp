// InvestmentCalculator.cpp
// Author: Jake Cookson
// Date: 6/9/2024
// Description: This file implements the InvestmentCalculator class, which calculates the investment growth over time
// both with and without monthly deposits. It uses the details provided by the Investment class.

#include "InvestmentCalculator.h"
#include <iostream>
#include <iomanip> // For std::setw and std::setprecision
#include <locale> // For std::locale, std::numpunct

// Custom numpunct class to format numbers with commas
class comma_numpunct : public std::numpunct<char> {
protected:
    virtual char do_thousands_sep() const {
        return ',';
    }

    virtual std::string do_grouping() const {
        return "\3";
    }
};

// Constructor initializes the calculator with an Investment object
InvestmentCalculator::InvestmentCalculator(Investment inv) : investment(inv) {}

void InvestmentCalculator::calculateWithoutMonthlyDeposits() {
    double principal = investment.getInitialInvestmentAmount();
    double rate = investment.getAnnualInterest() / 100; // Convert annual interest rate to decimal
    int years = investment.getNumberOfYears();

    std::locale comma_locale(std::locale(), new comma_numpunct());
    std::cout.imbue(comma_locale); // Set locale for comma formatting

    // Calculate investment growth without monthly deposits
    for (int year = 1; year <= years; ++year) {
        principal += principal * rate;
        std::cout << "Year " << year << ": $" << std::fixed << std::setprecision(2) << principal << std::endl;
    }
}

void InvestmentCalculator::calculateWithMonthlyDeposits() {
    double principal = investment.getInitialInvestmentAmount();
    double monthlyDeposit = investment.getMonthlyDeposit();
    double rate = investment.getAnnualInterest() / 100 / 12; // Convert annual interest rate to monthly rate
    int years = investment.getNumberOfYears();

    std::locale comma_locale(std::locale(), new comma_numpunct());
    std::cout.imbue(comma_locale); // Set locale for comma formatting

    // Calculate investment growth with monthly deposits
    for (int year = 1; year <= years; ++year) {
        for (int month = 1; month <= 12; ++month) {
            principal += monthlyDeposit;
            principal += principal * rate;
        }
        std::cout << "Year " << year << ": $" << std::fixed << std::setprecision(2) << principal << std::endl;
    }
}
