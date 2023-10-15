#include <iostream>

// ANSI escape codes for text colors and underlining 
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define YELLOW  "\033[33m"

int main() {
    
    using namespace std;

                cout << GREEN << "My Profile" << RESET <<"\n";
                cout << YELLOW << "-----------" << RESET <<"\n";
    
    cout << BLUE << " Name:" << GREEN << " Moin Khan " << RESET<< "\n";
    cout << YELLOW << "-----------------" <<RESET <<"\n";
    cout << BLUE << " Father:" << GREEN << " Muhammad iqbal" << RESET << "\n";
    cout << YELLOW << "-------------------------" <<RESET <<"\n";
    cout << BLUE << " Previous Degree :" <<GREEN << "Fsc pre-medical" << RESET << "\n";
    cout << YELLOW << "-----------------------------------" <<RESET <<"\n";
    cout << BLUE << " Current Degree :" << GREEN << "Software Engineering "<< RESET << "\n";
    cout << YELLOW << "-------------------------------------" <<RESET <<"\n";
    cout << BLUE << " Previous Institution: " << GREEN << "Degree College Bwn" <<RESET <<"\n";
    cout << YELLOW << "-----------------------------------------" <<RESET <<"\n";
    cout << BLUE << " Current Institution: " << GREEN<<"IUB BWP BWN campus" << RESET << "\n";
    cout << YELLOW << "-----------------------------------------" <<RESET <<"\n";
    cout << BLUE << " Email:"<<GREEN << "Hafizmoinofficial@gmail" << RESET << " \n";
    cout << YELLOW << "------------------------------" <<RESET <<"\n";
    //add yellow line below the green text
    cout << YELLOW << "<----------------->" <<RESET <<"\n";
    return 0;
}