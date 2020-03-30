#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

void putere(int n, int &d, int &p) {
    int maximDiv = 0, putereDiv = 0;

    d = 2;
    while(n > 1) {
        p = 0;
        while(n%d == 0) {
            p++;
            n /= d;
        }

        if(d == 2 or d == 5 or d == 7)
            if(maximDiv < d) maximDiv = d, putereDiv = p;

        d++;
    }
    d = maximDiv;
    p = putereDiv;
}

int main() {
    int d, p;
    putere(10780, d, p);
    cout << d << " " << p;
    return 0;
}
