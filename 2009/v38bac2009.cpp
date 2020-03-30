#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

void inter(int &x, int &y) {
    int aux = x;
    x = y;
    y = aux;
}

int main() {
    int n;
    int v[1001];

    f >> n;
    for(int i=1; i<=n; i++)
        f >> v[i];

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(v[i] > v[j])
                inter(v[i], v[j]);

    for(int i=1; i<=n; i++)
        cout << v[i] << " ";
}
