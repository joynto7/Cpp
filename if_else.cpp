#include<iostream>
using namespace std;

int main(){
    int a ;
    std::cout << "Enter the first integer:";
    std::cin >> a;
    int b;
    std::cout << "Enter the second integer:";
    std:cin >> b;

    if (a>b){
        std::cout << a   << " " <<  "is greater than"<< " " << b << std::endl;
    }else{
        std::cout << a << " " << "is smaller than" <<" " << b << std :: endl;
    }
    return 0;
}

