#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int factori(int n, int m) { // is this even corect?? idk but it works
    int nr = 0;
    if(n%2 == 0 and m%2 == 0) nr++;
    if(n%3 == 0 and m%3 == 0) nr++;
    if(n%5 == 0 and m%5 == 0) nr++;
    if(n%7 == 0 and m%7 == 0) nr++;

    return nr;
}

int main() {
    cout << factori(750, 490);
}
