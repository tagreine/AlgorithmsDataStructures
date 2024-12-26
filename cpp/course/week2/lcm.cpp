#include <iostream>

class LCM{

  private:
    int _a;
    int _b;

  public:

    LCM(int a, int b){
      _a = a;
      _b = b;
    }

    long long gcd(){
      while (_b != 0){
          int t = _b;
          _b = _a % _b;
          _a = t;
      }
      return _a;
    }
  
    long long lcm(){
      long long c = gcd();
      long long res = (_a / c) * _b;
      return res;
    }
};

int main() {
  int a, b;
  std::cin >> a >> b;
  LCM lcm = LCM(a, b);
  std::cout << lcm.lcm() << std::endl;
  return 0;
}
