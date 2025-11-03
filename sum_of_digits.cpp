#include<iostream>
using namespace std;

int mian(){

    int num , sum = 0;
    cout << "Enter The Number: ";
    cin >> num;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum of Digits :" << sum ;

    return 0;
}