#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    int nr = 0;

    char text[201], rez[201] = "";
    f.getline(text, 201);

    char ultimaLitera = '\0';
    char ultimulCuvant[26] = "";

    char *p = strtok(text, " ");
    while(p) {

        if(ultimaLitera != '\0')
            if(ultimaLitera == p[strlen(p)-1]) {
                nr++;
                strcat(rez, ultimulCuvant);
                strcat(rez, " succes ");
            }

        ultimaLitera = p[strlen(p)-1];
        strcpy(ultimulCuvant, p);
        p = strtok(NULL, " ");
    }

    strcat(rez, ultimulCuvant);
    if(nr) strcpy(text, rez);
    else strcpy(text, "nu exista");

    cout << text;
}
