#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int sum(int x) {
    int s = 0;
    for(int d=2; d <= x/2; d++)
        if(x%d == 0) s += d;

    return s;
}

bool cmp(int a, int b) {
    return a < b;
}

int v[101], k = 0;
int main() {
    int n;
    f >> n;

    int x;
    for(int i=1; i<=n; i++) {
        f >> x;
        v[++k] = sum(x);
    }

    sort(v, v+k+1, cmp);

    for(int i=1; i<=k; i++)
        cout << v[i] << " ";
}
