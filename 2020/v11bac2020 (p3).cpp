#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int aparitii = 0;
    int anterior, aux;

    f >> anterior;
    aparitii = 1;

    while(f >> aux) {
        if(aux == anterior) aparitii++;
        else {
            cout << anterior << " " << aparitii << " ";
            aparitii = 1;
        }
        anterior = aux;
    }
    cout << anterior << " " << aparitii;

    return 0;
}
