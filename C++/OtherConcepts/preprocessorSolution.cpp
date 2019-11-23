#define toStr(str) #str
#define io(vec) cin >> vec
#define FUNCTION(one, two) // don't understand how is this needed
#define minimum(a, b) a = min(a, b)
#define maximum(a, b) a = max(a, b)
#define INF (int) ( (1 << 31) - 1) // works with #define INF 10000000 which it can be found at the "Problem" tab of the exercise
#define foreach(v, i) for (int i = 0; i < v.size(); ++i)

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}