#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// works on hackerrank (C++ 14)
// don't think it works on Visual Studio maybe due to different C++ versions

int main() {
    int n;
    scanf("%d", &n);
    int a;
    int arr[n];
    
    while (n > 0) {
        scanf("%d", &a);
        arr[n - 1] = a;
        n--;
    }

    for (int x : arr) cout << x << " ";
    return 0;
}
