#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int v[10];
int main() {
    int n, aux;

    f >> n;
    for(int i=1; i<=n; i++) {
        f >> aux;
        while(aux) {
            if(v[aux%10] == 0) v[aux%10] = 1;
            aux /= 10;
        }
    }

    for(int i=0; i<=9; i++)
        if(v[i]) cout << i << " ";
}
