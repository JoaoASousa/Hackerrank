#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string n; getline(cin, n);
    int n_int = stoi(n);
    string str;
    vector<string> v;

    getline(cin, str);
    istringstream iss(str);
    for (size_t i = 0; i < n_int; ++i) {
        getline(iss, n, ' ');
        v.push_back(n);
    }

    // query part
    getline(cin, n);
    n_int = stoi(n);
    // first erase
    v.erase(v.begin() + n_int - 1);

    string lower, upper;
    getline(cin, str);
    istringstream iss2(str);
    getline(iss2, lower, ' ');
    getline(iss2, upper, ' ');
    // second erase
    v.erase(v.begin() + stoi(lower) - 1, v.begin() + stoi(upper) - 1);

    cout << v.size() << endl;
    for (size_t i = 0; i < v.size(); ++i) {
        if (i != 0) cout << " ";
        cout << v.at(i);
    }
    return 0;
}
