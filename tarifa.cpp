#include<iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int n;
    cin >> n;
    int p;
    int finalValue = 0;
    while(n--)
    {
        cin >> p;
        finalValue += x - p;
    }
    finalValue +=10;
    cout << finalValue << '\n';
    return 0;
}