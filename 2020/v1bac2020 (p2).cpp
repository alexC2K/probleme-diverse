#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int n, k;
    cin >> n >> k;

    int a[20][400];
    int nrAp = 0, cresc;
    for(int i=1; i<=n; i++) {
        nrAp = 0;
        cresc = i;
        for(int j=1; j<=k*n; j++) {
            if(nrAp == 3) {
                cresc++;
                nrAp = 0;
            }
            a[i][j] = cresc;
            nrAp++;
        }
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=k*n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
