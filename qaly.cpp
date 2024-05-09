#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    float q,y;
    float result = 0;
    cin >> n;
    for (int i=0; i < n; i++) {
        cin >> q >> y;
        result += q*y;
    }
    cout << fixed <<setprecision(3) << result << '\n';

    return 0;
}


// quality of tife 0-1
//first Line--> N is the number of periods of life (i think how many inputs)
//q is the quality of life
//y is the number of years