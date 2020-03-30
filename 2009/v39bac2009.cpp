#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

bool pr(int a) {
    if(a < 2) return 0;
    for(int d=2; d<=a/2; d++)
        if(a%d == 0) return 0;
    return 1;
}

int main() {
    int n;
    f >> n;
    while(n >= 10) {
        if(pr(n)) cout << n << " ";
        n/=10;
    }
}
