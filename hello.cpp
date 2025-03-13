#include <iostream>
#include <string>
#include <ctime>

int main() {
    std::string srn = "PES1UG22CS189";
    
    // Get current time
    time_t now = time(0);
    char* dt = ctime(&now);
    
    std::cout << "===================================" << std::endl;
    std::cout << "Jenkins Pipeline Test Program" << std::endl;
    std::cout << "===================================" << std::endl;
    std::cout << "SRN: " << srn << std::endl;
    std::cout << "Current time: " << dt;
    std::cout << "This program was compiled and executed via CI/CD pipeline" << std::endl;
    std::cout << "===================================" << std::endl;
    
    // Simple calculation to demonstrate functionality
    int a = 10, b = 5;
    std::cout << "Calculation demo:" << std::endl;
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    std::cout << a << " / " << b << " = " << (a / b) << std::endl;
    
    return 0;
}
