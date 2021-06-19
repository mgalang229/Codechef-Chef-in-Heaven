#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l;
		string s;
		cin >> l >> s;
		bool checker = false;
		int cnt = 0;
		for (int i = 0; i < l; i++) {
			if (s[i] == '1') {
				// if the current character is equal to '1', then increment 'cnt'
				cnt++;
			}
			// check if the current value of 'cnt' is fifty-percent of the current ('i' + 1)
			if (cnt == (double) round((i + 1) * 0.5)) {
				// if yes, then set 'checker' to true and break the loop
				checker = true;
				break;
			} 
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
