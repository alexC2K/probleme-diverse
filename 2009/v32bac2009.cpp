#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");
#define INT_MAX 2147483647

int main() {
    int aux;

    int minim = INT_MAX;
    int minim2 = INT_MAX;

    while(f >> aux) {
        if((aux >= -99 and aux <= -10) or (aux >= 10 and aux <= 99)) {
            if(aux < minim) {
                minim2 = minim;
                minim = aux;
            }

            if(aux < minim2)
                if(minim != aux) minim2 = aux;
        }
    }

    cout << minim << " " << minim2;
}
