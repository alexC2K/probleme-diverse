#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int v[10];
int main() {
    int n;
    f >> n;

    int aux, maxim = -1;
    for(int i=1; i<=n; i++) {
        f >> aux;
        v[aux]++;

        if(aux > maxim) maxim = aux;
    }
    cout << maxim << " " << v[maxim];
}
