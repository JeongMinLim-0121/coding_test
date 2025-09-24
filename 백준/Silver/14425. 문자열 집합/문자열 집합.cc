#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	unordered_set<string>set;
	set.reserve(n * 2);
	set.max_load_factor(0.7);

	string w;
	for (int i = 0; i < n; i++) {
		cin >> w;
		set.insert(w);
	}

	int ans = 0;
	for (int i = 0; i < m; i++) {
		cin >> w;
		if (set.count(w)) ans++;
	}
	
	cout << ans << '\n';
	return 0;
}

