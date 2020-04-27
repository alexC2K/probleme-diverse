#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int x;
    cin >> x;

    do {
        cout << x << " ";
        if(x <= 10) x--;
        if(x%2 != 0 && x > 10)
            x = x-1;
        else if(x%2 == 0 && x > 10)
            x = x/2;
    }while(x >= 1);
}
