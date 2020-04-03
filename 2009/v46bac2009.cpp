#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

void cifre(unsigned int nr, unsigned int &nc, unsigned int &sc) {
    nc = sc = 0;

    while(nr) {
        nc++;
        sc += nr%10;
        nr /= 10;
    }
}

int main() {
    unsigned int n;
    f >> n;

    unsigned int nrCifre = 0;
    unsigned int sumaCifre = 0;
    cifre(n, nrCifre, sumaCifre);

    bool gasit = false;
    while(n) {
        if(n%10 == (sumaCifre-n%10)/(nrCifre - 1)) {
            gasit = true;
            break;
        }

        n /= 10;
    }

    if(gasit) cout << "DA";
    else cout << "NU";
}
