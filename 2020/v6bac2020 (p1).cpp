#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int v[9], poz[9], k = 1;
int main() {
    int aux, maxim = 0;

    while(f >> aux) {
        v[aux%10]++;
        poz[aux%10] = k;

        if(v[aux%10] > maxim) maxim = v[aux%10];

        k++;
    }

    for(int i=0; i<=9; i++)
        if(v[i] == maxim) cout << poz[i] << " ";
}
