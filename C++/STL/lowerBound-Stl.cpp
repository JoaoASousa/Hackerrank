#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> v;
    int element;
    for (size_t i = 0; i < n; ++i) {
        cin >> element;
        v.push_back(element);
    }
    int n_queries; cin >> n_queries;
    int q;

    vector<int>::iterator it;
    for (size_t j = 0; j < n_queries; ++j) {
        cin >> q;

        it = lower_bound(v.begin(), v.end(), q);
        if (v.at(it - v.begin()) == q) {
            cout << "Yes " << (it - v.begin() + 1) << endl;
        }
        else {
            cout << "No " << (it - v.begin() + 1) << endl;
        }
    }
    
    return 0;
}
