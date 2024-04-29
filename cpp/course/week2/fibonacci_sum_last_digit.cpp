#include <iostream>
#include <string>

long long get_fibonacci_mod(int n){
    
    if (n <= 1){
        return n;
    }
    
    long long previous = 0;
    long long current = 1;

    for (int i = 0; i < n - 1; i++){
        long long tmp_previous = previous;
        previous = current;
        current += tmp_previous;
        current = current % 10;
    }
    return current;
}

long long get_sum_fibonacci_mod(long long n) {
    
    n = n%60;
    long long sum = 0;
    for(int i = 0; i<=n;i++){
        long long fib = get_fibonacci_mod(i);
        sum += fib;
        sum %= 10;
    }
    return sum;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << get_sum_fibonacci_mod(n) << std::endl;
}
