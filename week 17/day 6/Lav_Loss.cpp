#include <iostream>
#include <iomanip>

int main() {
    double X, Y, Z;
    
    // Read input values
    std::cin >> X >> Y >> Z;
    
    // Calculate the cost price (C)
    double costPrice = X / (1 - Y / 100.0);
    
    // Calculate the new selling price (S') for the desired profit
    double newSellingPrice = costPrice * (1 + Z / 100.0);
    
    // Print the new selling price rounded to two decimal places
    std::cout << std::fixed << std::setprecision(2) << newSellingPrice << std::endl;
    
    return 0;
}
