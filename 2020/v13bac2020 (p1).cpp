#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int prim(int x) {
    if(x < 2) return 0;
    for(int d=2; d*d <= x; d++)
        if(x%d == 0) return 0;
    return 1;
}

void putere(unsigned int n, unsigned int &d, unsigned int &p) {
    int minP = -1, minD = -1;

    d = 2;
    while(n > 1) {
        p = 0;
        while(n%d == 0) {
            n /= d;
            p++;
        }

        if(prim(d)) {
            if(p) {
                if(minP == -1) minP = p;
                if(minD == -1) minD = d;

                if(p < minP) {
                    minP = p;
                    minD = d;
                }
            }
        }

        d++;
    }
    d = minD;
    p = minP;
}

int main() {
    unsigned int d, p;
    putere(10780, d, p);

    cout << d << " " << p;
    return 0;
}
