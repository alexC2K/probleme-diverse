#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int n;
    int v[1001];

    f >> n;
    for(int i=1; i<=n; i++)
        f >> v[i];

    int ultimPar = -1;
    int ultimImpar = -1;
    bool okPar = true;
    bool okImpar = true;
    for(int i=1; i<=n; i++) {
        if(v[i]%2 == 0) {
            if(ultimPar == -1) ultimPar = v[i];
            else if(v[i] < ultimPar) {
                ultimPar = v[i];
                okPar = false;
            }
        }
        else {
            if(ultimImpar == -1) ultimImpar = v[i];
            else if(v[i] > ultimImpar) {
                ultimImpar = v[i];
                okImpar = false;
            }
        }
    }

    if(okImpar and okPar) cout << "DA";
    else cout << "NU";
}
