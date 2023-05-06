#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<pair<int, int>,string>mp;
    int n;
    cin>>n;
    while (n--)
    {
        int x,y;
        string s;
        cin>>x>>y;
        cin>>s;
        mp[{x,y}] = s;
    }
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<mp[{a,b}]<<endl;
    }
    return 0;
}