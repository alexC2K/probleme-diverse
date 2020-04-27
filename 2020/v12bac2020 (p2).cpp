#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    char s[101];
    f.getline(s, 101);

    int lungime = strlen(s)-1;
    bool modificat = false;

    for(int i = lungime; i >= 0; i--)
        if(strchr("aeiou", s[i])) {
            strcpy(s+i, s+i+1);
            modificat = true;
            break;
        }

    if(modificat) cout << s;
    else cout << "nu exista";

    return 0;
}
