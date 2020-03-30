#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int cifra(int a) {
    if(a == 0) return 0;

    int uc = -1;
    while(a) {
        if(a%10%2 == 0) uc = a%10;
        a /= 10;
    }

    return uc;
}

int v[5];
int main() {
    int n;
    f >> n;

    int x;
    for(int i=1; i<=n; i++) {
        f >> x;

        if(cifra(x) != -1) v[cifra(x) / 2] ++; // pun pe pozitia 0, 1, 2, 3, 4 nu pe 0, 2, 4, 6, 8
    }

    for(int i=4; i>=0; i--) {
        while(v[i]) {
            cout << i*2;
            v[i]--;
        }
    }
}
