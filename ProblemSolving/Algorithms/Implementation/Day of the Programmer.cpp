#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {

    if (year == 1918) { // 1918 is not a leap year and is the year of the transition
        return "26.09." + to_string(year); // -13 days
    }

    if (year < 1918) {

        // if not leap year -> feb has 28 days
        if (year % 4) {
            return "13.09." + to_string(year);
        }
        // if leap year     -> feb has 29 days
        else {
            return "12.09." + to_string(year); 
        }
    }

    if ((year % 400 == 0) || ( (year % 4 == 0) && (year % 100 != 0)) ) return "12.09." + to_string(year);
    return "13.09." + to_string(year);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
