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

//Q Sasta Shark Tank
/*
3
100 200
200 100
200 500


*/

//Q

//Global
//Global

void solve() {
	int a, b;
	cin >> a >> b;
	if (2 * a == b) cout << "ANY" << nline;
	else cout << ((2 * a > b) ? "FIRST" : "SECOND") << nline;
}


int main() {
	IOS;
	TEST{
		solve();
	}
}
