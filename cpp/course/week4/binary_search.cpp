#include <iostream>
#include <cassert>
#include <vector>

using std::vector;


class SearchAlgorithms{
  public:

    static int binary_search(const vector<int> &vec, int x) {
      int left = 0;
      int right = (int)vec.size(); 

      //write your code here
      while (right >= left)
      {
        int mid = left + (right - left) / 2;
        //std::cout << "mid : " << mid << ", value : " << vec[mid] << std::endl;
        if (vec[mid] == x) return mid;
        
        // go left in the array
        if (vec[mid] > x){
          right = mid - 1;
        } else{
          left = mid + 1;
        }
      }
      return -1;
    }

    static int linear_search(const vector<int> &vec, int x) {
      for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == x) return i;
      }
      return -1;
    }
};


int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }

  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }

  SearchAlgorithms srch;
  
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << srch.binary_search(a, b[i]) << ' ' << std::endl;
  }

}
