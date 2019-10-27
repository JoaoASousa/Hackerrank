#include <vector>

using namespace std;

vector<int> reverseArray(vector<int> a) {
    reverse(a.begin(), a.end());
    return a;
}