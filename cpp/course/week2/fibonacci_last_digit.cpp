#include <iostream>
#include <string>

int get_fibonacci_last_digit(int n) {
    if (n <= 1)
        return n;

    long previous = 0;
    long current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        current = current % 10;
        //std::cout << "fib mod: " << current << std::endl;  
    }
    
    return current;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit(n);
    std::cout << c << '\n';
    }
