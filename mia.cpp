#include <bits/stdc++.h>
using namespace std;

int getscore(int a, int b)
{
    return a > b ? a * 10 + b : b * 10 + a;
}

int cmpscore(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    if (a == 21)
    {
        return 1;
    }
    if (b == 21)
    {
        return -1;
    }
    bool is_a_double = (a % 10 == a / 10);
    bool is_b_double = (b % 10 == b / 10);

    if (is_a_double && is_b_double || !is_a_double && !is_b_double)
    {
        return a > b ? 1 : -1;
    }
    return is_a_double? 1 : -1;
}

int main()
{
    int s0, s1, r0, r1;

    while (cin >> s0 >> s1 >> r0 >> r1 && s0 != 0 && s1 != 0)
    {
        int score1 = getscore(s0, s1);
        int score2 = getscore(r0, r1);
        int comp = cmpscore(score1, score2);
        if (comp == 1)
        {
            cout << "Player 1 wins.\n";
        }
        else if (comp == -1)
        {
            cout << "Player 2 wins.\n";
        }
        else if (comp == 0)
        {
            cout << "Tie.\n";
        }
    }
    return 0;
}
