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

//Q Chef and Division
/*
3
3
1 2 3
4
4 4 4 4
5
1 2 3 3 5

*/

//Q

//Global
const int MOD = 998244353;
//Global

void solve() {
	int n;
	cin >> n;
	bool flag = 0;
	int dp[2][2] = {0};
	dp[0][0] = 1; 
	dp[0][1] = 1;
	REP(i, n) {
		int k; cin >> k;
		flag ^= k & 1;
		int t0 = dp[flag][1]; int t1 = dp[!flag][0];
		if (i == n - 1) cout << (t0 + t1) % MOD << nline;
		dp[flag][0] = (dp[flag][0] + t0) % MOD;
		dp[flag][1] = (dp[flag][1] + t1) % MOD;
	}

}


int main() {
	IOS;
	TEST{
		solve();
	}
}
