#include <iostream>
#include <fstream>
using namespace std;

int n, x[11];
ofstream g("date.out");

void afisare() {
	for (int i = 1; i <= n; i++)
		g << x[i];

	g << "\n";
}

bool bun(int i) {
	if (i == n and x[i] != x[1]) return false;

	for (int j = 2; j < i-1; j++)
        for (int k = i-1; k > j+1; k--)
            if (x[j] != x[k]) return false;

	return true;
}

void backtracking(int i) {
	while (i > 0) {
		while (i > 0 and i <= n) {
			x[i]++;
			if (x[i] > 9) x[i--] = 0;
			else if (bun(i)) i++;
		}
		if (i > n) {
			afisare();
			i = n;
		}
	}
}

int main() {
	cin >> n; // numere cu n cifre
	backtracking(1);
}
