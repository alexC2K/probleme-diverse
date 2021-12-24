#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
    char s[101];
    cin.getline(s, 101);

    int i = 0;
    int j = 0;
    while(i < strlen(s)-1) {
        if(s[i] == '-') {
            j = i+1;
            while(s[j] != ' ' and j < strlen(s)-1)
                j++;

            strcpy(s+i, s+j);
        }
        i++;
    }
    cout << s;

    return 0;
}
