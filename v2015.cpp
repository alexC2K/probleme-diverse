#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int ap[101] = { 0 };
    int x;

    while(f >> x)
        ap[x]++;

    int lungime = 0;
    int gasit = false;
    for(int i=0; i<=100; i++) {
        if(ap[i] == 0) lungime ++;
        else {
            if(lungime) {
                cout << i-lungime-1 << " " << i << "\n";
                lungime = 0;

                gasit = true;
            }
        }
    }
}
