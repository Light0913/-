//2
#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, n = 0;
	cin >> a;
	int b[a];
	for (int i = 0; i < a; i++) {
		cin >> b[i];
	}
	for (int j = 0; j < a; j++) {
		if (n < abs(b[j + 1] - b[j])) {
			n = abs(b[j + 1] - b[j]);
		}
	}
	cout << n;
	return 0;
}
