#include <iostream>
using namespace std;

int main() {
    int sum = 0, number;
    char choice;
    
    do {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
        
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Sum = " << sum << endl;
    return 0;
}