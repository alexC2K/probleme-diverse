#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int aux;
    int max1 = 0, max2 = 0, max3 = 0;
    while(f >> aux) {
        if(aux%10 == 0 and (aux/10)%10 == 2) {
            if(max3 < aux) {
                max1 = max2;
                max2 = max3;
                max3 = aux;
            }
            else if(max2 < aux) {
                max1 = max2;
                max2 = aux;
            }
            else if(max1 < aux) max1 = aux;
        }
    }

    cout << max1 << " " << max2 << " " << max3;
}
