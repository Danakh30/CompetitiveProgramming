#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string name;
    string date;
    string DOF;
    int course;
    int n;
    cin >> n;

    while (n--)
    {
        cin >> name >> date >> DOF >> course;

        int yearsec = stoi(date.substr(0, 4));
        int yearbirth = stoi(DOF.substr(0, 4));
        if (yearsec >= 2010 || yearbirth >= 1991)
        {
            cout << name << " eligible\n";
        }
        else if (course > 41)
        {
            cout << name << " ineligible\n";
        }
        else
        {
            cout << name << " coach petitions\n";
        }
    }

    return 0;
}
