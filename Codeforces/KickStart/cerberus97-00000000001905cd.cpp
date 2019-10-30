/* cerberus97 - Hanit Banga */

#include <iostream>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const int N = 1e5 + 10;

bool seen[N], have[N];
int ans[N];

int main() {
	fast_cin();
	int tc; cin >> tc;
	for (int t = 1; t <= tc; ++t) {
		cout << "Case #" << t << ": ";
		int n, m, q;
		cin >> n >> m >> q;
		for (int i = 1; i <= n; ++i) {
			seen[i] = false;
			have[i] = true;
		}
		for (int i = 1; i <= m; ++i) {
			int p; cin >> p;
			have[p] = false;
		}
		ll ret = 0;
		while (q--) {
			int r; cin >> r;
			if (!seen[r]) {
				seen[r] = true;
				ans[r] = 0;
				for (int i = r; i <= n; i += r) {
					ans[r] += have[i];
				}
			}
			ret += ans[r];
		}
		cout << ret << '\n';
	}
}