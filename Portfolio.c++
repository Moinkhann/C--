#include <iostream>

// ANSI escape codes for text colors and underlining 
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define YELLOW  "\033[33m"
#define Red "\033[31m"
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"
int main() {
    
    using namespace std;
       cout <<"\n";
       cout <<"\n";

                cout << YELLOW<< BOLD << UNDERLINE" My Profile" << RESET <<"\n";
                cout <<"\n";
    
  cout <<YELLOW<<"1." RESET<< BLUE <<BOLD " Name:" RESET << GREEN <<UNDERLINE"Moin Khan" << RESET<< "\n";
  cout <<YELLOW<<"2." RESET<< BLUE <<BOLD " Father:" RESET << GREEN <<UNDERLINE"Muhammad iqbal" << RESET << "\n";
  cout <<YELLOW<<"3." RESET<< BLUE <<BOLD " Previous Degree:" RESET << GREEN <<UNDERLINE"Fsc pre-medical" << RESET << "\n";
  cout <<YELLOW<<"4." RESET<< BLUE <<BOLD " Current Degree:" RESET << GREEN <<UNDERLINE"Software Engineering"<< RESET << "\n";
  cout <<YELLOW<<"5." RESET<< BLUE <<BOLD " Previous Institution:" RESET << GREEN <<UNDERLINE"Degree College Bwn" <<RESET <<"\n";
  cout <<YELLOW<<"6." RESET<< BLUE <<BOLD " Current Institution:" RESET<< GREEN <<UNDERLINE"IUB BWP BWN campus" << RESET << "\n";
  cout <<YELLOW<<"7." RESET<< BLUE <<BOLD " Email:" RESET <<GREEN <<UNDERLINE"Hafizmoinofficial@gmail.com" << RESET << " \n";
   cout << " \n";
    //add yellow line below the green text
    cout << YELLOW <<BOLD "<----------------->" <<RESET <<"\n";
    cout <<"\n";
     cout <<"\n";
    
    return 0;
}