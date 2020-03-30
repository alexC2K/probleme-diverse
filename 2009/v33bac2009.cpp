#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int n;
    f >> n;

    int aux;
    int maxim = -1, maxim2 = -1;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            f >> aux;

            if(aux >= 100 and aux <= 999)
                if(maxim < aux) {
                    maxim2 = maxim;
                    maxim = aux;
                }

            if(aux > maxim2)
                if(maxim != aux) maxim2 = aux;

        }
    }
    cout << maxim << " " << maxim2;
}
