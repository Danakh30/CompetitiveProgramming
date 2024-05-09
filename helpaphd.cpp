#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string problem;

    while (n--)
    {
        cin >> problem;
        if (problem == "P=NP")
        {
            cout << "skipped\n";
        }
        else
        {
            size_t plus = problem.find('+');
            string a = problem.substr(0, plus);
            string b = problem.substr(plus + 1);
            int sum = stoi(a) + stoi(b);
            cout << sum << '\n';
        }
    }

    return 0;
}
