#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter Three Numbers: ";
    cin >> a >> b >> c ;
    int large = (a>b && a>c)? a : (b > c ? b : c );
    cout << " The Large Number : " << large ;
    return 0;
}