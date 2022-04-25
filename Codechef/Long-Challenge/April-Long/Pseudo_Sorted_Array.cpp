#include <bits/stdc++.h>
using namespace std;
#define nline			"\n"
#define PB              push_back
#define EB              emplace_back
#define F               first
#define S               second
#define all(x)          begin(x), end(x)
#define rall(x)         rbegin(x), rend(x)
#define sz(x)           (long long) (x).size()
#define FOR(i, a, b)    for(int i = (a); i < (b); i++)
#define REP(i, a)       FOR(i, 0, a)
#define IOS             ios::sync_with_stdio(false);cin.tie(NULL);cout << fixed <<setprecision(6)
#define TEST            int tt; cin >> tt;while(tt--)
#define sim             template<typename> T
#define ris             return *this
#define ll 				long long
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vb = vector<bool>;
using mii = map<int, int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

//Q Pseudo Sorted Array
/*
3
5
3 5 7 8 9
4
1 3 2 3
3
3 2 1

*/

//Q

//Global
//Global

void solve() {
	int n;
	cin >> n;
	vi v(n);
	REP(i, n) cin >> v[i];
	REP(i, n - 2) {
		if (v[i] > v[i + 2]) {
			cout << "NO\n";
			return;
		}
	}
	// }
	// cout << "YES\n";
	int cnt = 0;
	int val = v[0];
	FOR(i, 1, n) {
		if (v[i] >= val) {
			val = v[i];
		}
		else {
			// cnt++;
			if (v[i] >= v[i - 2]) cnt++;
		}
	}
	if (cnt > 1) cout << "NO\n";
	else cout << "YES\n";
	// 	bool flag = false;
	// 	if (cnt == 1) {
	// 		cnt = 0;

	// 	}

	// 	if (flag && !cnt) cout << "YES\n";
	// 	else cout << "NO\n";
	// }
}


int main() {
	IOS;
	TEST{
		solve();
	}
}
