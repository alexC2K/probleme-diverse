#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, v[10], k = 0;
    f >> n;

    int aux;
    for(int i=1; i<=n; i++) {
        f >> aux;
        v[++k] = aux;
    }

    sort(v, v+k+1, cmp);
    for(int i=1; i<=n; i++)
        cout << v[i];
}
