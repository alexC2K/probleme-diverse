#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

void cif(int nr, int &s) {
    s = 0;

    while(nr) {
        s += nr%10;
        nr /= 10;
    }
}

int main() {
    int n;

    int v[26], k = 0;
    int auxSum, maxim = 0;

    int aux;
    for(int i=1; i<=n; i++) {
        f >> aux;
        v[++k] = aux;

        auxSum = 0; // calculez maximul sumei cifrelor la citire
        cif(aux, auxSum);
        if(maxim < auxSum) maxim = auxSum;
    }

    for(int i=1; i<=k; i++) {
        auxSum = 0;
        cif(v[i], auxSum); // verific daca maximul sumei e egal cu suma elementului curent
    
        if(auxSum == maxim) cout << v[i] << " ";
    }
}
