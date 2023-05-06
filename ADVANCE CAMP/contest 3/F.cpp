#include<bits/stdc++.h>
using namespace std;
#define s(a) scanf("%d",&a)
#define p(a,b) printf("%d %d\n",a,b)
#define vp vector<pair<int,int> >

bool cmp(pair<int,int> a,pair<int,int> b){
    return (a.first<b.first || (a.first==b.first && a.second>b.second));
}

int main(){
    int t;
    s(t);
    while(t--){
        int n;
        s(n);
        vp v;
        int x,y;
        for(int i=0;i<n;i++){
            s(x);s(y);
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end(),cmp);    
        for(int i=0;i<n;i++){
            p(v[i].first,v[i].second);
        }
    }
    return 0;
}