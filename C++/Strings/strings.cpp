#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    int n;
    vector<string> words;
	while(getline(cin,s)){
       n = 0;
       words.push_back(s);
       for (auto & ch : s){
           n++;
       } 
    }
    for (auto w : words) {
        cout << w.size() << " ";
    }
    cout << endl;
    for (auto w : words) {
        cout << w;
    }

    char one = words.at(1)[0];
    char two = words.at(0)[0];
    words.at(0)[0] = one;
    words.at(1)[0] = two;
    cout << endl;
    for (auto & w : words) cout << w << " ";


    return 0;
}

