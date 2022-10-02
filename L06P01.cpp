#include <iostream>
using namespace std;

int main() {
	int m, n, a[1000][1000];
	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++)
		sum = sum + a[i][j];
		cout << i << ": " << sum << endl;
	}
	return 0;
}
