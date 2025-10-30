#include<iostream>
using namespace std;
int main(){
    int a,b;
    std::cout << "Enter the first inteher:";
    std::cin >> a;
    std::cout << "Enter the second integer:";
    std::cin >> b;

    //Using ternary operator to find the maximum
    int max  = (a>b)? a:b;
    std::cout <<"The max value is:" << max << std::endl;
    
    //nested ternary 

    int c;
    std::cout << "Enter the third integer:";
    std::cin >> c;
    int maximum = (a>b)? ( (a>c)? a : c ) : ( (b>c)? b : c );
    std::cout << "The maximum value among three is:" << maximum << std::endl;

    return 0;
}
