#include <iostream>
using namespace std;

int main() {
    int choice;
    
    do {
        cout << "\n=== Menu ===" << endl;
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "You selected Option 1" << endl;
                break;
            case 2:
                cout << "You selected Option 2" << endl;
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);
    
    return 0;
}