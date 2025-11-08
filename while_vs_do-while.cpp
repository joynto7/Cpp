#include <iostream>
using namespace std;

int main() {
    int count = 10;
    
    // while loop - condition checked first
    cout << "while loop:" << endl;
    while (count < 5) {
        cout << "This won't execute" << endl;
        count++;
    }
    
    // do-while loop - executes at least once
    cout << "\ndo-while loop:" << endl;
    do {
        cout << "This executes once, count = " << count << endl;
        count++;
    } while (count < 5);
    
    return 0;
}