#include <iostream>

int main() {
    // 1. Declare two integer variables for the dimensions
    int length;
    int width;
    int area;

    // 2. Prompt the user for input (Length)
    std::cout << "Enter the length of the rectangle: ";
    
    // 3. Read the input and store it in the 'length' variable
    std::cin >> length; 

    // 4. Prompt the user for input (Width)
    std::cout << "Enter the width of the rectangle: ";
    
    // 5. Read the input and store it in the 'width' variable
    std::cin >> width;

    // 6. Perform the calculation and store the result
    area = length * width;

    // 7. Print the final result to the console
    std::cout << "\nThe area of the rectangle is: " << area << std::endl;

    return 0;
}