#include <string>

using namespace std;

string timeConversion(string s) {

    string newString = s.substr(0,8);
    int hours = stoi(s.substr(0,2));
    int minutes = stoi(s.substr(3,2));
    int seconds = stoi(s.substr(6,2));
    
    // 80 is the ASCII code for 'P'
    if (*(s.rbegin() + 1) == 80) {
        if (hours != 12) {
            newString.replace(newString.begin(),newString.begin()+2,to_string(hours + 12));
        }
    }

    // if it's AM
    else {
        if (hours == 12) {
            newString.replace(newString.begin(),newString.begin()+2,"00");
        }
    }
    
    return newString;
}