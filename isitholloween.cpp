#include<iostream>
using namespace std;

int main() {
    string date;
    getline (cin, date);
    if (date == "OCT 31" || date == "DEC 25") {
        cout << "yup";
    }
    else { 
        cout << "nope";
    }
    return 0;
}