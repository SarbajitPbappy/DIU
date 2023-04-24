#include<bits/stdc++.h>
using namespace std;
int countSteps(int s,int e){
    if(s==e) return 1;
    if(s>e) return 0;
    else{
        return countSteps(s+1,e)+countSteps(s+2,e)+countSteps(s+3,e);
    }
}
int main(){
    int s,e;
    cin>>s>>e;
    cout<<countSteps(s,e)<<endl;
}