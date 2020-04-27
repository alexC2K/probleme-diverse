#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int n;
    cin >> n;

    int a[20][20];

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i+j == n + 1) a[i][j] = 0;
            else if(i+j < n + 1) a[i][j] = n-j-i+1;
            else if(i+j > n + 1) a[i][j] = abs(n-j-i+1);
        }
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) cout << a[i][j] << " ";
        cout << "\n";
    }
}
