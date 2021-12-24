#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

char vocale[] = "aeiou", s[256];
int frecv[6][6];

int func(char c) {
    int i=0;
    while(i < 5) {
        if(c == vocale[i]) break;
        i++;
    }
    return i;
}

int main() {
    int maxim = 0;
    while(f.getline(s, 256)) {

        for(unsigned int x=0; s[x]; x++) {
            int l1 = func(s[x]);
            int l2 = func(s[x+1]);
            if(l1 < 5 && l2 < 5) {
                frecv[l1][l2] ++;
                if(maxim < frecv[l1][l2]) maxim = frecv[l1][l2];
            }
        }

    }

    for(int i=0; i<=5; i++) {
        for(int j=0; j<=5; j++) {
            if(frecv[i][j] == maxim) cout << vocale[i] << vocale[j] << " ";
        }
    }

    return 0;
}
