#include <iostream>

int sum_of_two_digits(int a, int b){
    return a + b;
}

int main(){
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;

    std::cout << sum_of_two_digits(a, b) << std::endl;
}