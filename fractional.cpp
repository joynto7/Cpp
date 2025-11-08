#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1, i = 1;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    while (i <= n) {
        factorial *= i;
        i++;
    }
    
    cout << "Factorial of " << n << " = " << factorial << endl;
    return 0;
}