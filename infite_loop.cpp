#include <iostream>
using namespace std;

int main() {
    int number;
    
    while (true) {
        cout << "Enter a number (0 to exit): ";
        cin >> number;
        
        if (number == 0) {
            break;  // exit the loop
        }
        
        cout << "You entered: " << number << endl;
    }
    
    cout << "Program ended!" << endl;
    return 0;
}