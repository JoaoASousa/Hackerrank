#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string line;
	getline(cin, line);
	vector<int> stickers;
	std::istringstream iss(line);
	for (string s; iss >> s; )
		stickers.push_back(stoi(s));

	int max = 0;

	for (int i = 0; i < stickers.size(); i++) {
		if (stickers.at(i) > stickers.at(max)) {
			max = i;
		}
	}

	cout << max;

	return 0;
}