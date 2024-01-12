#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	string s;
	cin >> n >> s;
	for (int i = n - 2; i >= 0; i -= 2) {
		cout << s[i];
	}
	int i = 0;
	if (n % 2 == 0) i++;
	for (; i < n; i += 2) {
		cout << s[i];
	}

	return 0;
}
