#include <iostream>
#include <vector>

long long MaxPairwiseProduct(const std::vector<int> vect) {
    int n = vect.size();
    int max_val1 = vect[0];
    int max_val2 = vect[1];

    for (int i = 2; i < n; i++){

        if (vect[i] > max_val1 && vect[i] > max_val2){
            max_val1 = std::max(max_val1, max_val2);
            max_val2 = vect[i];
        } else if (vect[i] > max_val1){
            max_val1 = vect[i];
        } else if (vect[i] > max_val2){
            max_val2 = vect[i];
        }
        
    }

    return (long long) max_val1 * max_val2; 
}

int main(){
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++){
        std::cin >> vec[i];
    } 

    std::cout << MaxPairwiseProduct(vec) << std::endl;
    return 0;
}