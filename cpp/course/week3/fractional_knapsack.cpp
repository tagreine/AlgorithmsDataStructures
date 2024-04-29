#include <iostream>
#include <vector>

using std::vector;

int get_best_item(vector<int> &weights, vector<int> &values){

  double max_value_pr_weight = 0;
  int best_item = 0;

  for (int i = 0; i < weights.size(); i++){
    
    if (weights[i] != 0){
      double current_val = (double) values[i] / (double) weights[i];
      if (current_val > max_value_pr_weight){
        max_value_pr_weight = current_val;
        best_item = i;
      }
    }
  }
  return best_item;
}


double get_optimal_value(int capacity, vector<int> &weights, vector<int> &values) {
  double value = 0.0;
  // write your code here
  int item;
  int a = 0;

  while (true){

    item = get_best_item(weights, values);
    if (weights[item] == 0){
      return value;
    } 

    a = std::min(weights[item], capacity);
    double w = (double) values[item] / (double) weights[item];
    
    value += (double) a * w;
    weights[item] -= a;
    capacity -= a;

    if (capacity == 0){
      return value;
    } 

  }
}


int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
