#include <vector>

using namespace std;

int birthdayCakeCandles(vector<int> ar) {
    sort(ar.begin(), ar.end(), greater<int>());
    int counter = 0;

    for (auto & n : ar) {
        if (n == ar[0]){
            counter++;
        }
    }
    return counter;
}