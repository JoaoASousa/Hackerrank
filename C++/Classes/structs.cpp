#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    string age, first_name, last_name, standard; 
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
