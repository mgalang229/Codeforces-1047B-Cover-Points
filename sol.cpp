#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	long long ans = LLONG_MIN;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		// find the farthest coordinate from the origin (0, 0)
		ans = max(ans, (long long) x + y);
	}
	cout << ans << '\n';
	return 0;
}
