#include <iostream>
using namespace std;

int main()
{
    int n, x, y = -1;
    int mini = 10000;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < mini)
        {
            mini = x;
            y = i;
        }
    }
    cout << y << '\n';
    return 0;
}
