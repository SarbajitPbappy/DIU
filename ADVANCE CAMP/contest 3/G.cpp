#include<bits/stdc++.h>
using namespace std;

#define vpp vector<pair<string,pair<int,int>>>

void Sapxep1(vpp &v)
{
    sort(v.begin(),v.end(),[](pair<string,pair<int,int>> a, pair<string,pair<int,int>> b) {
        if (a.second.first != b.second.first) return a.second.first > b.second.first;
        if (a.second.second != b.second.second) return a.second.second < b.second.second;
        return a.first < b.first;
    });

    for (int i=0;i<5;i++)
        for (int j=i+1;j<5;j++)
            if (v[i].first > v[j].first) swap(v[i], v[j]);

    for (int i=5;i<10;i++)
        for (int j=i+1;j<10;j++)
            if (v[i].first > v[j].first) swap(v[i], v[j]);
}

void Print(vpp &v)
{
    printf("(%s, %s, %s, %s, %s)\n",v[0].first.c_str(),v[1].first.c_str(),v[2].first.c_str(),v[3].first.c_str(),v[4].first.c_str());
    printf("(%s, %s, %s, %s, %s)\n",v[5].first.c_str(),v[6].first.c_str(),v[7].first.c_str(),v[8].first.c_str(),v[9].first.c_str());
}

int main()
{
    int t;
    cin >> t;

    for (int i=1;i<=t;i++){
        vpp v;

        for (int j=1;j<=10;j++){
            string s;
            int x,y;
            cin >> s >> x >> y;

            v.push_back(make_pair(s,make_pair(x,y)));
        }

        Sapxep1(v);

        printf("Case %d:\n",i);
        Print(v);
    }

    return 0;
}
