#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1, cases; cin >> cases; i++)
    {
        int x;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int j = 0; j < cases; j++)
        {
            cin >> x;
            mini = min(x, mini);
            maxi = max(x, maxi);
        }
        cout << "Case " << i << ": " << mini << " " << maxi << " " << maxi - mini << "\n";
    }
    return 0;
}
