#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define rev_rep(i, a, b) for (int i = (a); i >= (b); --i)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) int((x).size())
#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define rfor(i, n) for (int i = int(n)-1; i >= 0; --i)
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define is_odd(x) ((x) & 1)
#define is_even(x) (!((x) & 1))
#define mem(x, v) memset(x, v, sizeof(x))
#define read(x) cin >> x
#define write(x) cout << x
#define writeln(x) cout << x << endl
#define debug(x) cerr << #x << " = " << x << endl
#define yesno(x) ((x) ? "Yes" : "No")
#define YESNO(x) ((x) ? "YES" : "NO")
#define ONOFF(x) ((x) ? "ON" : "OFF")
#define square(x) ((x) * (x))
#define cube(x) ((x) * (x) * (x))
#define int_bits(x) __builtin_popcount(x)
#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define deb(x) cerr << #x << " = " << x << '\n'
#define int long long
#define pcc pair<char, char>
#define pc(x) putchar(x)
#define endl '\n'
#define ld long double
#define ld_frac(x) (1.0L / (ld)(x))
#define rint register int
#define umap unordered_map
#define uset unordered_set
#define ffor(i, a, b) for (rint i = (a); i <= (b); ++i)
#define frep(i, a, b) for (rint i = (a); i < (b); ++i)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define umap unordered_map
#define uset unordered_set
#define umset unordered_multiset
#define eb emplace_back
#define intpair pair<int,int>
#define llpair pair<long long,long long>
#define strpair pair<string,string>
#define pii pair<int,int>
#define pll pair<long long,long long>
#define umapss unordered_map<string,string>
#define umapsp unordered_map<string,pair<int,int>>
#define umapsi unordered_map<string,int>
#define mapisp map<int,string,pair<int,int>>
#define mapiisp map<pair<int,int>,string>
#define vecint vector<int>
#define vecbool vector<bool>
#define vecchar vector<char>
#define vecstr vector<string>
#define vecpii vector<pair<int,int>>
#define vecpll vector<pair<long long,long long>>
#define vecpiistr vector<pair<int,string>>
#define vecspstr vector<pair<string,string>>
#define vecmssp vector<map<string,pair<int,int>>>
#define vecvpii vector<vector<pair<int,int>>>
#define vecvstr vector<vector<string>>
#define vecvint vector<vector<int>>
#define vecseti vector<set<int>>
#define vecsetstr vector<set<string>>

#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,n) for(int i=1; i<=(n); ++i)
#define repa(i,a,n) for(int i=(a); i<(n); ++i)
#define repa1(i,a,n) for(int i=(a); i<=(n); ++i)
#define rrep(i,n) for(int i=(n)-1; i>=0; --i)
#define rrep1(i,n) for(int i=(n); i>=1; --i)
#define rrepa(i,a,n) for(int i=(n)-1; i>=(a); --i)
#define rrepa1(i,a,n) for(int i=(n); i>=(a); --i)
#define trv(it,v) for(auto it=(v).begin(); it!=(v).end(); ++it)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) (int)(x).size()
