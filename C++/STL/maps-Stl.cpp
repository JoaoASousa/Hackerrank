#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <map>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n_queries;
    cin >> n_queries;

    map<string, int> m;

    int type;
    string name;
    int mark;
    for (size_t i = 0; i < n_queries; ++i) {
        cin >> type;
        switch(type){
            // add to mark
            case 1:
                cin >> name;
                cin >> mark;
                // if in the map
                if (m.find(name) != m.end()) {
                    m[name] += mark;
                }
                else {
                    m.insert(make_pair(name, mark));
                }
                break;
            // erase
            case 2:
                cin >> name;
                if (m.find(name) != m.end()) {
                    m[name] = 0;
                }
                break;
            // print mark
            case 3:
                cin >> name;
                if (m.find(name) != m.end()) {
                    cout << m[name] << endl;
                }
                else {
                    cout << '0' << endl;
                }
                break;
        }
    } 
    return 0;
}
