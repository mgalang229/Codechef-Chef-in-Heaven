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
		int cnt = 0;
		// set 'ans' to NO (initially)
		string ans = "NO";
		for (int i = 0; i < l; i++) {
			// add the numerical equivalent of the current character to 'cnt'
			cnt += (s[i] - '0');
			// check if the product of 2 and 'cnt' is greater than or equal to ('i' + 1) (50%)
			if (2 * cnt >= (i + 1)) {
				// if yes, then set 'ans' to YES and break the loop
				ans = "YES";
				break;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
