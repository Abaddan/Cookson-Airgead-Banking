# super-duper-octo-potato
# Airgead Banking

## **Overview**

Cookson Airgead Banking is a C++ project designed to calculate the growth of an investment over time. The application allows users to input various investment parameters and provides a detailed analysis of the investment growth both with and without monthly deposits.

## **Features**

User-friendly input prompts for investment details
Validation of user inputs
Calculation of investment growth without monthly deposits
Calculation of investment growth with monthly deposits
Reusable classes for Investment and InvestmentCalculator

## **Project Structure**

The project consists of several key files:

Cookson Airgead Banking.sln: The solution file for the project.
Cookson Airgead Banking.vcxproj: The project file.
Cookson Airgead Banking.vcxproj.filters: The filters file for organizing the project in Visual Studio.
Cookson Airgead Banking.vcxproj.user: The user-specific project settings file.
Investment.cpp: Implementation file for the Investment class.
Investment.h: Header file for the Investment class.
InvestmentCalculator.cpp: Implementation file for the InvestmentCalculator class.
InvestmentCalculator.h: Header file for the InvestmentCalculator class.
Main.cpp: Main entry point for the application.
PseudocodeProject1.txt: Pseudocode outlining the program flow.
Getting Started
Prerequisites
Visual Studio or any compatible C++ development environment.
Building the Project
Clone the repository to your local machine.
Open Cookson Airgead Banking.sln in Visual Studio.
Build the solution by selecting Build > Build Solution.
Running the Application
After building the project, run the executable generated.
Follow the prompts to enter the initial investment amount, monthly deposit amount, annual interest rate, and number of years to invest.
The application will display the growth of the investment both with and without monthly deposits.
You can choose to enter another set of investment parameters or exit the application.

## **Classes**

### *Investment*

This class holds the investment details such as initial amount, monthly deposit, annual interest rate, and investment duration.

### *InvestmentCalculator*

This class performs the calculations for investment growth based on the parameters provided in the Investment class.

## **Pseudocode**

The program flow is outlined in PseudocodeProject1.txt:
```
Start

Display welcome message

Repeat:
    Display prompt for user input: "Please enter the following details:"
    Prompt user for initial investment amount
    Validate and store initial investment amount
    Prompt user for monthly deposit amount
    Validate and store monthly deposit amount
    Prompt user for annual interest rate
    Validate and store annual interest rate
    Prompt user for number of years to invest
    Validate and store number of years to invest

    Create an Investment object
    Set the initial investment amount, monthly deposit amount, annual interest rate, and number of years for the Investment object

    Create an InvestmentCalculator object with the Investment object

    Calculate and display investment growth without monthly deposits
    Calculate and display investment growth with monthly deposits

    Prompt the user to enter another inquiry
    If user input is 'Y' or 'y', continue the loop
    Otherwise, exit the loop

Display goodbye message
Wait for user to press Enter
Terminate the program

End
```
