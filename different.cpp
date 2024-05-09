#include<iostream>
#include <cmath>
using namespace std;

int main() {
    long long x, y;
    long long difference = 0;
    long long result = 0;
    while(cin >> x >> y) {
        difference = x - y;
        result = abs(difference);
        cout << result << '\n';
    }
    return 0;
}