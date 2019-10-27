#include <stdio.h>
#include <vector>
#include <numeric>  // to use accumulate

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    vector<int> v1;
    for (int i = 0; i < arr.size(); i++) {
        v1.push_back(arr.at(i).at(i));
    }
    vector<int> v2;
    int n = 0;
    for (int j = arr.size() - 1; j >= 0; j--) {
        v2.push_back(arr.at(n).at(j));
        n++;
    }
    int x1 = accumulate(v1.begin(), v1.end(), 0);
    int x2 = accumulate(v2.begin(), v2.end(), 0);

    return x1>x2 ? x1-x2 : x2-x1;
}