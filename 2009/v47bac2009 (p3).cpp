#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    unsigned int n;
    f >> n;

    unsigned int k;
    cin >> k;

    int aux, copie;
    for(int i=1; i<=n; i++) {
        f >> aux;
        copie = aux;

        while(aux%k == 0)
            aux /= k;

        if(aux == 1) cout << copie << " ";
    }
}
