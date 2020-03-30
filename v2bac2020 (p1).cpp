#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

void fii(int n) {
    cout << "(" << n << " " << "1)" << " ";

    for(int d=n/2; d >= 2; d--) {
        if(n%d == 0)
            if(d > n/d) cout << "(" << d << " " << n/d << ")" << " ";
    }
}

int main() {
    int n;
    cin >> n;

    fii(n);
    return 0;
}
