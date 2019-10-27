#include <iostream>
#include <stdint.h> // to use int64_t (avoiding overflow)
#include <vector>
#include <numeric>  // to use accumulate

using namespace std;

void miniMaxSum(vector<int> arr) {
    
    int64_t small = arr[0], big = arr[0];
    for (auto & n : arr) {
        if (n < small) {
            small = n;
        }
        else if (n > big) {
            big = n;
        }
    }

    int64_t maxSum = accumulate(arr.begin(), arr.end(), -small);
    int64_t  minSum = accumulate(arr.begin(), arr.end(), -big);
    cout << minSum << " " << maxSum << endl;
}