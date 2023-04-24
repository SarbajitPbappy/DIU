#include<bits/stdc++.h>
using namespace std;
void printDigits(int n){
    if(n<10){
        cout<<n<<" ";
        return;
    }
    printDigits(n/10);
    cout<<n%10<<" ";
}
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        printDigits(n);
        cout <<"\n";
    }
}