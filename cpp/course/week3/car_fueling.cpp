#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here
    stops.push_back(dist);
    int current_distance = tank;
    int refils = 0;
    for (int i = 0; i < stops.size() - 1 && current_distance < dist; i++){
        if (stops[i] <= current_distance && stops[i+1] > current_distance)
        {
            refils++;
            current_distance = stops[i] + tank;
        }

    }
    return current_distance >= dist ? refils : -1;
}


int main() {
    int d = 10;
    //cin >> d;
    int m = 100;
    //cin >> m;
    int n = 4;
    //cin >> n;

    vector<int> stops(n);
    stops.push_back(10);
    stops.push_back(20);
    stops.push_back(30);
    stops.push_back(40);
    //for (size_t i = 0; i < n; ++i)
    //    cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
