#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    char s[101], rez[101] = "";
    cin.getline(s, 101);

    char *p = strtok(s, " ");
    while(p) {
        for(int i=0; p[i]; i++) {
            if(i == 0) {
                if(p[i] >= 'A' and p[i] <= 'Z') continue;
                else p[i] -= 32;
            }
            else
                if(p[i] >= 'A' and p[i] <= 'Z') p[i] += 32;
        }

        strcat(rez, p);
        strcat(rez, " ");

        p = strtok(NULL, " ");
    }

    rez[strlen(rez)-1] = NULL;
    strcpy(s, rez);

    cout << s;
}
