#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int G, S, C;
    cin >> G >> S >> C;

    int buyPower = (G * 3) + (S * 2) + (C);
    if (buyPower >= 8)
    {
        cout << "Province";
    }
    else if (buyPower >= 5)
    {
        cout << "Duchy";
    }
    else if (buyPower >= 2)
    {
        cout << "Estate";
    }
    if (buyPower >= 6)
    {
        cout << " or Gold";
    }
    else if (buyPower >= 3)
    {
        cout << " or Silver";
    }
    else if (buyPower >= 2)
    {
        cout << " or Copper";
    }
    else
    {
        cout << "Copper";
    }

    return 0;
}