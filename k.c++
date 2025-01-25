#include <iostream>
#include <cstdlib> // For system()

int main() {
    // Clear the terminal
    #ifdef _WIN32
        system("cls"); // Clear screen for Windows
    #else
        system("clear"); // Clear screen for Linux/Mac
    #endif

    // Prompt the user for input
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;

    // Display the input
    std::cout << "You entered: " << number << std::endl;

    return 0;
}
