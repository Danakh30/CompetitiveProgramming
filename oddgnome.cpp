#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, g;
    cin >> n;
    vector<int> gnomes;
    while (n--)
    {
        cin >> g;
        gnomes.resize(g);
        for (int i = 0; i < g; i++)
        {
            cin >> gnomes[i];
        }
        for (int i = 1; i < g - 1; i++)
        {
            if (gnomes[i] - gnomes[i - 1] != 1)
            {
                cout << i + 1;
                break;
            }
        }
    }
    return 0;
}
