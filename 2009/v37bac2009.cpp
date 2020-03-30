#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int nrdiv(int x);
int prim(int x);

int main() {
    int n;
    f >> n;

    int x;
    int prim = -1;
    int ultim = -1;
    for(int i=1; i<=n; i++) {
        f >> x;

        if(prim == -1)
            if(nrdiv(x)%2 == 0) prim = x;
        else
            if(nrdiv(x)%2 == 0) ultim = x;
    }

    cout << prim << " " << ultim;
}
