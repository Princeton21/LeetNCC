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

//Q Geometric Mean Inequality
/*
3
5
1 1 1 -1 -1
3
1 1 1
6
1 -1 -1 -1 -1 1

*/

//Global
//Global

void solve() {
	int n;
	cin >> n;
	int a = 0;
	int b = 0;
	REP(i, n) {
		int temp;
		cin >> temp;
		if (temp == 1) a++;
		else b++;
	}
	if (abs(a - b) > 2) cout << "No\n";
	else if (abs(a - b) == 2 && a % 2 == 1 && b % 2 == 1) cout << "No\n";
	else cout << "Yes\n";
}


int main() {
	IOS;
	TEST{
		solve();
	}
}
