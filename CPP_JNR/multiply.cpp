#include <iostream>
#include <iomanip>

int main() {
    int size;
    
    std::cout << "Enter the size of multiplication table: ";
    std::cin >> size;
    
    std::cout << "\nMultiplication Table:\n\n";
    
    // Print header
    std::cout << std::setw(4) << " ";
    for (int i = 1; i <= size; ++i) {
        std::cout << std::setw(4) << i;
    }
    std::cout << "\n";
    
    // Print separator
    for (int i = 0; i <= size; ++i) {
        std::cout << "----";
    }
    std::cout << "\n";
    
    // Print rows
    for (int i = 1; i <= size; ++i) {
        std::cout << std::setw(4) << i << "|";
        for (int j = 1; j <= size; ++j) {
            std::cout << std::setw(4) << (i * j);
        }
        std::cout << "\n";
    }
    
    return 0;
}