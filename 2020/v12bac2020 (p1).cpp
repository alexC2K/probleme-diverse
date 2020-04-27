#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int pDoi(unsigned int n) {
    int nrGasit = -1;

    for(int numar = n; numar >= 1; numar--) {
        int d = 2, p;
        int i = numar;

        while(i > 1) {
            p = 0;

            while(i % d == 0) {
                i /= d;
                p ++;
            }
            d++;
        }

        if(d == 3) {
            nrGasit = numar;
            break;
        }
    }
    if(nrGasit != -1) return nrGasit;
}

int main() {
    cout << pDoi(5);
    return 0;
}
