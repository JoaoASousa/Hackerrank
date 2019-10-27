#include <vector>

using namespace std;

long aVeryBigSum(vector<long> ar) {
    long int sum = 0;
    for (int i = 0; i < ar.size(); i++){
        sum += ar[i];
    }
    return sum;
}