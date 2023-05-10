#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>ve;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        ve.push_back(y);
    }
    auto maxIt=max_element(ve.begin(),ve.end());
    cout<<*maxIt<<endl;
    auto minIt=min_element(ve.begin(),ve.end());
    cout<<*minIt<<endl;
    sort(ve.begin(),ve.end());
    for(int i=0;i<x;i++){
        cout<<ve[i]<<" ";
    }
    cout<<endl;
    sort(ve.begin(),ve.end(),greater<>());
    for(int i=0;i<x;i++){
        cout<<ve[i]<<" ";
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<x;i++){
        sum+=ve[i];
    }
    cout<<sum<<endl;
    cout<<(double)sum/ve.size()<<endl;
}