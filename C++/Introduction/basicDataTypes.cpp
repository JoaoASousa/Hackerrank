#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int a; long b; char c; float d; double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;
    
    return 0;
}