#include <iostream>

int get_change(int money) {
  //write your code here

  if (money == 0){
    return 0;
  }

  int num_coins = 0;

  while (money > 0){
      if (money >= 10){
        money -= 10;
        ++num_coins;
      } else if (money >= 5)
      {
        money -= 5;
        ++num_coins;
      } else if (money >= 1)
      {
        --money;
        ++num_coins;
      }
  }

  return num_coins;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
