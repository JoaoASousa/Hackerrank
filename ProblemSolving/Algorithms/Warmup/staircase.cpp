#include <iostream>
#include <iomanip>

using namespace std;

void staircase(int n) {

    for (int i = 1; i <= n; i++) {
        cout << setw(n) << right << string(i, '#') << endl;
    }

}