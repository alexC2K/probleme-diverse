#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int v[101];
int main() {
    int n;
    f >> n;

    int aux;
    for(int i=1; i<=n; i++) {
        f >> aux;
        v[aux]++;
    }

    for(int i=0; i<=99; i++)
        if(v[i] == 1) cout << i << " ";

}
