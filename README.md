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

## Getting Started

### Prerequisites

Visual Studio or any compatible C++ development environment.

### Building the Project

Clone the repository to your local machine.

Open Cookson Airgead Banking.sln in Visual Studio.

Build the solution by selecting Build > Build Solution.

### Running the Application

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

## **Reflection**

### **Summarize the project and what problem it was solving.**
This project aimed to create a tool for calculating the growth of investments over time, addressing the need for individuals to understand how their investments could grow with and without monthly deposits. It provided a simple yet comprehensive way for users to input their investment details and get projections on their potential returns.

### **What did you do particularly well?**
I implemented the user input validation and investment calculation logic effectively. The design of the Investment and InvestmentCalculator classes allowed for clean and modular code, making it easy to follow and maintain.

### **Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?**
I could enhance the code by adding more robust error handling and incorporating unit tests. Improving error handling would make the program more user-friendly and reliable, while unit tests would ensure the correctness and stability of the code, making it easier to maintain and extend in the future.

### **Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?**
The most challenging part was the calculation of investment growth with monthly deposits, as it required precise handling of compound interest calculations. I overcame this by breaking down the problem into smaller steps and using reliable formulas. I also referred to online resources and documentation to ensure accuracy.

### What skills from this project will be particularly transferable to other projects or course work?
The skills of modular code design, input validation, and handling user interactions are highly transferable. Additionally, understanding and implementing financial formulas will be useful in other projects that require similar calculations.

### How did you make this program maintainable, readable, and adaptable?
I made the program maintainable by using clear and descriptive variable names, writing modular code with well-defined classes, and including comments where necessary. The use of classes for Investment and InvestmentCalculator makes the code adaptable, as changes in one part of the program can be made without affecting other parts. The clear structure also aids readability, making it easier for others to understand and contribute to the project.
