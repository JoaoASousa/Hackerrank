#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int aScore = 0, bScore = 0;
    
    for (int i = 0; i < a.size(); i++){
        if (a[i] > b[i]){
            aScore += 1;
        }
        else if (a[i] < b[i]){
            bScore += 1;
        }

    }
    vector <int> result = {aScore, bScore};

    return result;

}