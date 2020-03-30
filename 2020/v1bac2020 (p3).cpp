#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int x, y, z, aux;
    cin >> x >> y;

    z = 3 * x - y;
    cout << y << " " << x << " " << z << " ";
    do {
        aux = x;
        x = z;
        y = aux;

        z = 3 * x - y;
        cout << z << " ";
    } while(x != 1);
    return 0;
}
