#include <iostream>

template<typename T> T pisano_period(T m)
{
    T previous = 0;
    T current = 1;
    T result = 0;
 
    for(int i = 0; i < m * m; i++)
    {
        T tmp_previous = current;
        current = (previous + current) % m;
        previous = tmp_previous;
 
        if (previous == 0 && current == 1)
            result = i + 1;
    }
    return result;
}


template<typename T> T get_fibonacci_mod(T n, T m) {
    if (n <= 1)
        return n;
    
    T pisano = pisano_period(m);

    n = n % pisano;
 
    T previous = 0;
    T current = 1;
 
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
 
    for(int i = 0; i < n - 1; i++)
    {
        T tmp_previous = current;
        current = (previous + current) % m;
        previous = tmp_previous;
    }
    return current % m;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_mod<long long>(n, m) << '\n';
}
