// InvestmentCalculator.h
// Author: Jake Cookson
// Date: 6/9/2024
// Description: This file defines the InvestmentCalculator class, which calculates the investment


#ifndef INVESTMENTCALCULATOR_H
#define INVESTMENTCALCULATOR_H

#include "Investment.h"

class InvestmentCalculator {
private:
    Investment investment; // Investment object

public:
    InvestmentCalculator(Investment inv); // Constructor
    void calculateWithoutMonthlyDeposits(); // Calculate investment growth without monthly deposits
    void calculateWithMonthlyDeposits(); // Calculate investment growth with monthly deposits
};

#endif
