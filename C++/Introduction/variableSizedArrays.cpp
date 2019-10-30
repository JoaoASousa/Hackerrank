#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, size, var, i, j;

    scanf("%d %d", &n, &q);
    vector< vector<int> > bigger;
    vector<int> smaller;
    while (n > 0) {
        smaller.clear();
        scanf("%d", &size);
        for (int i = 0; i < size; i++) {
            scanf("%d", &var);
            smaller.push_back(var);
        }
        bigger.push_back(smaller);
        n--;
    }

    while (q > 0) {
        scanf("%d %d", &i, &j);
        cout << bigger.at(i).at(j) << endl;
        q--;
    }

    return 0;
}
