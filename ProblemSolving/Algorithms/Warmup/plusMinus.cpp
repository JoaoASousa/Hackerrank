#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void plusMinus(vector<int> arr) {
    double negativeCount = 0, positiveCount = 0, zeroCount = 0;
    double size = arr.size();

    for (auto & elem : arr) {
        if (elem > 0) positiveCount++;
        else if (elem == 0) zeroCount++;
        else negativeCount++;
    }
    
    cout << setprecision(7) << positiveCount/size << endl;
    cout << setprecision(7) << negativeCount/size << endl;
    cout << setprecision(7) << zeroCount/size << endl;
}