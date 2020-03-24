#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
  int n;
  f >> n;
  
  int intervale = 0, margine = 0;
  float aux;
  for(int i=1; i<=n; i++) {
    f >> aux;
    if(aux > margine) {
      intervale++;
      margine = int(aux) + 1;
    }
  }
  cout << intervale;
}
