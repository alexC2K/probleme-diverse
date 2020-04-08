#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int aux;
    int lungime = 0;
    int lungimeMax = 0;
    int nr = 0;

    while(f >> aux) {
        if(aux%2 == 0) lungime ++;
        else {
            if(lungime > lungimeMax) {
                lungimeMax = lungime;
                nr = 0;
            }
            if(lungime == lungimeMax) nr++;

            lungime = 0;
        }
    }
    if(lungime > lungimeMax) {
        lungimeMax = lungime;
        nr = 0;
    }
    if(lungime == lungimeMax) nr++;

    cout << nr;
}
