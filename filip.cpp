#include <bits/stdc++.h>
using namespace std;

int Reverse(string A, string B)
{
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    int a = stoi(A);
    int b = stoi(B);
    if (A > B)
        return a;
    return b;
}

int main()
{

    string A, B;
    cin >> A >> B;
    cout << Reverse(A, B);
    return 0;
}
