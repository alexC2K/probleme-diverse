#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int aux;
    int suma = INT_MAX, sumaMinima = INT_MAX;

    while(f >> aux) {
        if(suma > 0) suma = aux;
        else suma += aux;

        if(suma < sumaMinima) sumaMinima = suma;
    }
    cout << sumaMinima;
    return 0;
}
