#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

void patrate(unsigned int x, unsigned int y) {
    int valoare = 0;
    int suma = 0;
    int ultimPatrat = 0;
    for(int i=y; i>=x; i--) {
        valoare = sqrt(i);
        if(valoare * valoare == i) {
            ultimPatrat = i;
            suma += i;
            break;
        }
    }
    for(int i=x; i<=y; i++) {
        valoare = sqrt(i);
        if(valoare * valoare == i && ultimPatrat != i) {
            cout << i << "+";
            suma += i;
        }
    }
    if(suma != 0) cout << ultimPatrat << "=" << suma;
    else cout << "nu exista";
}

int main() {
    patrate(11, 15);
    return 0;
}
