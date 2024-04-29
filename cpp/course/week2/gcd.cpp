#include <iostream>

int gcd_naive(int a, int b) {
    int current_gcd = 1;
    for (int d = 2; d <= a && d <= b; d++ ){
        if (a % d == 0 && b % d == 0){
          current_gcd = d;
        }
    }
  return current_gcd;
}

int gcd(int a, int b){
  while (b != 0){
      int t = b;
      b = a % b;
      a = t;
  }
  return a;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
  return 0;
}
