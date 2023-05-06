#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define i int
#define c cin
#define cu cout
#define e endl
#define fr(n) for(int j=0; j<n; j++)

int main() {
    i n;
    c >> n;
    vi v;
    fr(n) {
        i x;
        c >> x;
        v.push_back(x);
    }
    i x, a, b;
    c >> x;
    v.erase(v.begin() + x - 1);
    c >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b-1);
    cu<<v.size()<<e;
    fr(v.size()) cu << v[j] << " ";
}
