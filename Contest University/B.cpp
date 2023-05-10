#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int rev=0;
    while(y!=0){
        int singleDigit=y%10;
        rev=(rev*10)+singleDigit;
        y/=10;
    }
    cout<<x-rev<<endl;
}