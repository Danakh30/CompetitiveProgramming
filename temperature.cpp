#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    double A;
    if (y > 1 || y < 1)
    {
        A = x / (1 - y);
        printf("%.6F", A);
    }
    else if (x == 0 && y == 1)
    {
        cout << "ALL GOOD";
    }
    else if (y == 1)
    {
        cout << "IMPOSSIBLE";

        return 0;
    }
}
