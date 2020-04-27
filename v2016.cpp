#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int n, aux;
    int anterior;
    int i = 1;

    f >> n;
    f >> anterior;
    if(anterior != 0) { // primul caz particular
        while(i < anterior) {
            cout << i << " ";
            i++;
        }
    }
    
    // program propriu zis
    while(f >> aux) {
        if(aux - anterior != 0) {
            i = anterior + 1;
            while(i < aux) {
                cout << i << " ";
                i++;
            }
        }
        anterior = aux;
    }

    i = anterior + 1; // ultimul caz particular
    while(i <= n) {
        cout << i << " ";
        i++;
    }
    
    return 0;
}
