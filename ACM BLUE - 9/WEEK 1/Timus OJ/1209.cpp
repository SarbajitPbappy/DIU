#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long k;
    while(n--){
        cin>>k;
        long long d=(long long)8*k-7;
        long long low=1,high=d,mid;
        while(low!=high){
            mid=(low+high+1)/2;
            if(mid>d/mid){
                high=mid-1;
            }
            else{
                low=mid;
            }
        }
        if(low*low==d && (low&1)==1){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
        cout<<" ";
    }
    cout<<endl;
}