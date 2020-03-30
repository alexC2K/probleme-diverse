#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    char s[101];
    f.getline(s, 101);

    char *p = strtok(s, " ");
    while(p) {
        int i;
        for(i=0; i <= strlen(p)-1; i++)
            if(p[i] == '-') {
                i = 999;
                break;
            }

        if(i != 999) cout << p << " ";
        p = strtok(NULL, " ");
    }
}
