#include <vector>

using namespace std;

int simpleArraySum(vector<int> ar) {
    long int sum = 0;
    for (int i = 0;  i < ar.size(); i++){
        sum += ar[i];
    }
    return sum;
}