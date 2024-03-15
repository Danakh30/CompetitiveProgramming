#include <iostream>
using namespace std;


int main () {
    int n, m ;
    cin >>  n >> m; 

    if (n <  m ) {
        int p = 0;
        p = m - n;
        if (p >1){
        cout << "Dr. Chaz will have "<< p << " pieces of chicken left over!" << '\n';
        }
        else {
        cout << "Dr. Chaz will have "<< p << " piece of chicken left over!" << '\n';
        }
    }
    else if (n > m) {
        int q =0;
        q = n - m;
        if(q > 1){
        cout << "Dr. Chaz needs "<< q <<" more pieces of chicken!" << '\n'; 
        }
        else {
            cout << "Dr. Chaz needs "<< q <<" more piece of chicken!" << '\n'; 
        }
    }
 





    return 0;
}