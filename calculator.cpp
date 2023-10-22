#include <iostream>

// ANSI escape codes for text colors and underlining 
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define YELLOW  "\033[33m"
#define Red "\033[31m"
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"

//header

int main() {
    using namespace std;
    char operation;
    double num1, num2, result;
    cout <<"\n";
    cout <<"\n";

    cout << "\t" <<BLUE<< BOLD"<---------- " RESET <<YELLOW << BOLD "MY CALCULATOR"
    RESET << BLUE << BOLD" ---------->" << RESET<< endl;
    cout <<"\n";
    cout <<"\n";

  // Input
   
    cout << GREEN << BOLD "Enter first number" RESET << YELLOW ": " RESET;
    cin >> num1;
    
    cout <<"\n";

    cout << GREEN<< BOLD "Enter an operation " << RESET << YELLOW " : " RESET ;
    cin >> operation;

    cout <<"\n";

    if (operation != '%') {
        cout << GREEN << BOLD "Enter second number" RESET << YELLOW ": " RESET ;
        cin >> num2;
    }
  
  // Calculation and result

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0)
            cout <<"\n";
            cout <<"\n"; 
            {
                cout << Red << BOLD << UNDERLINE "Error! Division by zero is not allowed." RESET << endl;
                
                cout <<"\n";
                cout <<"\n";

                return 1;
            }
            
    

            result = num1 / num2;
            break;
        case '%':
            result = (num1 * num2) / 100; // Calculate percentage
            break;
        default:

        cout <<"\n";
        cout <<"\n";

            cout << Red << BOLD << UNDERLINE "Invalid operation. Please use +, -, *, /, or %." RESET << endl;

            cout <<"\n";
            cout <<"\n";

            return 1;
    }

    cout <<"\n";

    if (operation == '%') {
        cout << GREEN << BOLD "Result: " RESET BLUE << num1 << RESET<< GREEN << BOLD "% of " RESET BLUE << num2 << RESET<< GREEN << BOLD " = " RESET << result << endl;
    } else { 
        cout << GREEN << BOLD "Result: " RESET BLUE << num1 << " " << operation << " " << num2 << RESET YELLOW " = " RESET << result << endl;
    }
    
    cout <<"\n";
    cout <<"\n";
    cout <<"\n"; 
    cout <<"\n";

    return 0;
}