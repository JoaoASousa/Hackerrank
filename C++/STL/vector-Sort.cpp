#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; vector<int> v;
    cin >> n;
    while (cin >> n) {
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    for (int elem : v) cout << elem << " ";
    return 0;
}