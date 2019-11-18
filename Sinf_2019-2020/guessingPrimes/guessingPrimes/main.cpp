#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

bool isprime(int n) {
	if (n <= 1)
		return false;

	if (n <= 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i*i <= n; i = i + 6) {
		if (n%i == 0 || n % (i + 2) == 0)
			return false;
	}

	return true;
}

int main() {
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int lower;
	int upper;
	int counter;

	string line;
	for (int i = 0; i < n; i++) {

		counter = 0;
		getline(cin, line);

		istringstream iss(line);
		iss >> lower;
		iss >> upper;

		for (int i = lower; i <= upper; i++) {
			if (isprime(i))
				counter++;
			if ((i % 2 == 1) && (i >= 3)) i++;
		}

		cout << counter << endl;

	}

	return 0;
}