// main.cpp
// Author: Jake Cookson
// Date: 6/9/2024
// Description: This program calculates the growth of an investment over time with and without monthly deposits.
// It allows the user to input the initial investment amount, monthly deposit amount, annual interest rate,
// and the number of years to invest. The program then outputs the investment growth year by year, formatted with commas.

#include <iostream>
#include "Investment.h"
#include "InvestmentCalculator.h"
#include <limits> // For std::numeric_limits
#include <locale> // For std::locale
#include <sstream> // For std::stringstream

// Function to remove commas from a string
std::string removeCommas(const std::string& str) {
    std::string result;
    std::locale loc;
    for (char ch : str) {
        // Check if the character is a digit or a decimal point
        if (std::isdigit(ch, loc) || ch == '.') {
            result += ch; // Add valid characters to the result string
        }
    }
    return result; // Return the string without commas
}

// Function to validate user input as numeric
template <typename T>
T getInput(const std::string& prompt) {
    T value;
    while (true) {
        std::cout << prompt; // Display prompt message
        std::string input;
        std::cin >> input; // Get user input
        input = removeCommas(input); // Remove commas from input string
        std::stringstream ss(input); // Create a stringstream from the input
        if (ss >> value && ss.eof()) {
            // Input is valid if it can be parsed to the expected type and there are no extra characters
            break;
        }
        else {
            // Clear input buffer and display error message
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter a valid numeric value." << std::endl;
        }
    }
    return value; // Return the validated numeric value
}

// Function to validate user input as a character (Y/N)
char getYesNoInput(const std::string& prompt) {
    char value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;
        value = toupper(value);
        if (value == 'Y' || value == 'N') {
            break;
        }
        else {
            std::cout << "Please enter 'Y' for yes or 'N' for no." << std::endl;
        }
    }
    return value;
}

int main() {
    char continueChoice;
    do {
        double initialAmount, monthlyDeposit, annualInterest;
        int years;

        // Welcome message
        std::cout << "\n\nWelcome to Airgead Banking Investment Calculator\n";
        std::cout << "-------------------------------------------------\n";
        std::cout << "Please enter the following details:\n";

        // Get user inputs for investment details
        initialAmount = getInput<double>("Initial Investment Amount: ");
        monthlyDeposit = getInput<double>("Monthly Deposit Amount: ");
        annualInterest = getInput<double>("Annual Interest Rate (in %): ");
        years = getInput<int>("Number of Years to Invest: ");

        // Create an Investment object and set its properties
        Investment investment;
        investment.setInitialInvestmentAmount(initialAmount);
        investment.setMonthlyDeposit(monthlyDeposit);
        investment.setAnnualInterest(annualInterest);
        investment.setNumberOfYears(years);

        // Create an InvestmentCalculator object with the investment details
        InvestmentCalculator calculator(investment);

        // Calculate and display investment growth without monthly deposits
        std::cout << "\n\nCalculated investment growth without monthly deposits:\n";
        std::cout << "------------------------------------------------------\n";
        calculator.calculateWithoutMonthlyDeposits();
        std::cout << "\n";

        // Calculate and display investment growth with monthly deposits
        std::cout << "Calculated investment growth with monthly deposits:\n";
        std::cout << "---------------------------------------------------\n";
        calculator.calculateWithMonthlyDeposits();
        std::cout << "\n";

        // Prompt user to continue or exit
        continueChoice = getYesNoInput("Would you like to enter another inquiry? (Y/N): ");
        std::cout << "\n";
    } while (continueChoice == 'Y');

    // Goodbye message
    std::cout << "Thank you for using Airgead Banking Investment Calculator. Goodbye!\n";

    return 0;
}
