#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll g, l;
        cin >> g >> l;
        if (l % g != 0)
        {
            cout << "-1\n";
            continue;
        }
        ll p = l / g;
        ll a = 1, b = l;
        for (ll i = 1; i*i <= p; i++)
        {
            if (p%i == 0)
            {
                ll x = i, y = p / i;
                if (gcd(x, y) == 1 && x*g<=l && y*g<=l)
                {
                    if(x<a || (x==a && y<b))
                    a = x * g;
                    b = y * g;
                    break;
                }
            }
        }
        cout << a << " " << b << "\n";
    }
}