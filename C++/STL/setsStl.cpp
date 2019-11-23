#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string n; getline(cin, n);
    int n_int = stoi(n);
    string str, str1, str2;
    set<int> s;

    for (size_t i = 0; i < n_int; ++i) {
        getline(cin, str);
        istringstream iss(str);
        
        getline(iss, str1, ' ');
        getline(iss, str2, ' ');

        switch (stoi(str1)) {
            case 1:
                s.insert(stoi(str2));
                break;
            case 2:
                s.erase(stoi(str2));
                break;
            case 3:
                if (s.find(stoi(str2)) == s.end()) cout << "No" << endl;
                else cout << "Yes" << endl;
                
                break;
        }
    
    }
    return 0;
}
