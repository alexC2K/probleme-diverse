#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int frecv[101];
int main() {
    unsigned int n;
    f >> n;

    int aux;
    for(int i=1; i<=n; i++) {
        f >> aux;
        frecv[aux] ++;
    }

    for(int i=0; i<=100; i++) {
        if(frecv[i])
            for(int j=1; j<=frecv[i]; j++)
                cout << i << " ";
    }
}
