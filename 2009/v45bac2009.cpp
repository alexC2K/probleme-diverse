#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int n;
    f >> n;

    float frecv[101];
    for(int i=1; i<=n; i++)
        f >> frecv[i];

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) { // caut sa vad daca nu cumva mai exista un element in restul vectorului
            if(i == j) continue;
            if(frecv[i] == frecv[j]) break; // daca am gasit, sal
        }
        if(j == n) cout << frecv[i] << " "; // am ajuns la final deci nu mai e niciunul la fel
    }
}
