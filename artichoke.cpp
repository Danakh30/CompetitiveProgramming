#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, p;
double Price(int k)
{
    return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main()
{
    int n;
    cin >> p >> a >> b >> c >> d >> n;
    double max_differece = INT_MIN;
    double max_val = Price(1);
    for (int i = 2; i <= n; i++)
    {
        auto price = Price(i);
        auto difference = max_val - price;
        max_val = max(max_val, price);
        max_differece = max(difference, max_differece);
    }

    cout << fixed << setprecision(9) << (max_differece < 0 ? 0.00 : max_differece) << '\n';
    return 0;
}
