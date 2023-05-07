// Macros for common data types
#define ll long long
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int,int>>
#define vvpii vector<vector<pair<int,int>>>
#define umap unordered_map
#define uset unordered_set

// Macros for loops
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

// Macros for STL functions
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define eb emplace_back
#define sort(v) sort(all(v))
#define sortr(v) sort(rall(v))
#define unique(v) sort(all(v)), (v).erase(unique(all(v)), (v).end())
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)

// Macros for common mathematical operations
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

// Macros for debugging
#define debug(x) cerr<<#x<<" : "<<x<<"\n";
#define debugarr(arr,sz) cerr<<#arr<<" : "; rep(i,sz) cerr<<arr[i]<<" "; cerr<<"\n";

// Macros for string operations
#define tostr(x) to_string(x)
#define stoi(x) stoi(x)

// Macros for bit manipulation
#define bit(x) (1LL<<(x))
#define bitcount(x) __builtin_popcountll(x)
#define MSB(x) 64-__builtin_clzll(x)
#define LSB(x) __builtin_ctzll(x)

// Macros for printing containers
// Macros for printing containers
#define printvec(v) { for(auto x : v) cout << x << " "; cout << endl; }
#define printset(s) { for(auto x : s) cout << x << " "; cout << endl; }
#define printmap(m) { for(auto x : m) cout << x.fi << ": " << x.se << endl; }

// Macros for taking input output
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inputarr(arr,sz) rep(i,sz) cin>>arr[i];
#define printarr(arr,sz) rep(i,sz) cout<<arr[i]<<" "; cout<<"\n";
#define printvec(v) { for(auto x : v) cout << x << " "; cout << endl; }
// Macros for input/output
#define cint(n) int n; cin >> n;  // Read integer input
#define clong(n) long long n; cin >> n;  // Read long long integer input
#define cstr(s) string s; cin >> s;  // Read string input
#define cchar(c) char c; cin >> c;  // Read character input

#define cvec(v, n) vector<int> v(n); for(int i=0; i<n; i++) cin >> v[i];  // Read vector input
#define coutvec(v) { for(auto x : v) cout << x << " "; cout << endl; }  // Output vector

#define carray(a, n) int a[n]; for(int i=0; i<n; i++) cin >> a[i];  // Read array input
#define coutarray(a, n) { for(int i=0; i<n; i++) cout << a[i] << " "; cout << endl; }  // Output array

#define coutnl cout << endl;  // Output newline

// Macros for frequently used values
#define mod 1000000007
#define inf 1e18
#define PI 3.1415926535897932384626
#define MAX 1000005
#define MAXN 1000005
#define MAXM 1000005
#define EPSILON 1e-9
#define MAXCHAR 256
#define NIL -1
#define MAXLEVEL 10000

// Macros for bounds
#define lb(v,x) lower_bound(all(v),x) - v.begin() // First element in the range [first,last) which does not compare less than val.
#define ub(v,x) upper_bound(all(v),x) - v.begin() // First element in the range [first,last) which compares greater than val.

// Macros for vectors
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define trv(it,v) for(auto it=(v).begin(); it!=(v).end(); ++it)

// Macros for iterators
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define rtr(it, a) for(auto it = a.rbegin(); it != a.rend(); it++)
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())

// Macros for common data types
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<long long, long long>>
#define pq priority_queue
#define umap unordered_map
#define uset unordered_set
#define mset multiset
#define si set<int>
#define sll set<long long>
#define maxheap priority_queue<int>
#define minheap priority_queue<int, vector<int>, greater<int>>
#define MOD 1000000007
#define INF 1000000000000000000
#define endl "\n"
#define sp " "
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inputarr(arr,sz) rep(i,sz) cin>>arr[i];
#define printarr(arr,sz) rep(i,sz) cout<<arr[i]<<" "; cout<<"\n";
#define printvec(v) { for(auto x : v) cout << x << " "; cout << endl; }
#define printset(s) { for(auto x : s) cout << x << " "; cout << endl; }
#define printmap(m) { for(auto x : m) cout << x.fi << ": " << x.se << endl; }

// Macros for taking input output
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inputarr(arr,sz) rep(i,sz) cin>>arr[i];

// Macros for input/output
#define cint(n) int n; cin >> n;  // Read integer input
#define clong(n) long long n; cin >> n;  // Read long long integer input
