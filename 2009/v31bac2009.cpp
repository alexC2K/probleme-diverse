#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main() {
  int n;
  f >> n;
  
  int maximX = -101;
  int maximY = 101;
  int x, y;
  
  for(int i=1; i<=n; i++) {
    f >> x >> y;
    
    if(x > maximX) maximX = x;
    if(y < minimY) minimY = y;
  }
  
  if(maximX > minimY) cout << "0";
  else cout << maximX << " " << maximY;
}
