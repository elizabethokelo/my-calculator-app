#include <iostream>
#include <cmath> // For advanced math actions

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double sqrt(double a);
double log(double a);

int main() {
double num1, num2; // Variables to store user inputs
char operation; // Variable to store the operation
// Display the menu to the user
std::cout << "Simple Calculator\n";
std::cout << "Enter an operation (+, -, *, /, ^ for power, sqrt(squareroot), log(natural log)): ";
std::cin >> operation;
// Ask for inputs based on the chosen operation
std::cout << "Enter the first number: ";

std::cin >> num1;
// If the operation is not unary, ask for the second number
if (operation != '!' && operation != 's') {
std::cout << "Enter the second number: ";
std::cin >> num2;
}
// Perform the operation based on user input
switch (operation) {
case '+':
std::cout << "Result: " << add(num1, num2) << std::endl;
break;
case '-':
std::cout << "Result: " << subtract(num1, num2) << std::endl;
break;
case '*':
std::cout << "Result: " << multiply(num1, num2) << std::endl;
break;
case '/':
if (num2 != 0) {
std::cout << "Result: " << divide(num1, num2) << std::endl;
} else {
std::cout << "Error: Division by zero is not allowed.\n";
}
break;
case '^':
std::cout << "Result: " << power(num1, num2) << std::endl;
break;
default:
std::cout << "Error: Invalid operation.\n";
break;
case 'sqrt':
std::cout << "Result" << sqrt(num1) << std::endl;
break;
case 'log':
std::cout <<"Result" << log(num1) << std::endl;
}

return 0;
}

// Function to add two numbers
double add(double a, double b) {
return a + b;
}
// Function to subtract the second number from the first number
double subtract(double a, double b) {
return a - b;
}
// Function to multiply two numbers
double multiply(double a, double b) {
return a * b;
}
// Function to divide the first number by the second number
double divide(double a, double b) {
return a / b;
}
// Function to calculate the power of a number
double power(double base, double exponent) {
return std::pow(base, exponent);

}
// Function to divide the first number by the second number
double divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Error: Division by zero is not allowed.");
    }
    return a / b;
}

    
