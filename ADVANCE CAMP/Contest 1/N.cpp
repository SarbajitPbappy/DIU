// #include<bits/stdc++.h>
// using namespace std;
// int cycleCount(int n){
//     int count=1;
//     while(n!=1){
//         if(n%2==0){
//             n/2;
//         }
//         else{
//             n=3*n+1;
//         }
//         count++;
//     }
//     return count;
// }
// int length(int a,int b){
//     int len=0;
//     for(int n=a;n<=b;n++){
//         int length=cycleCount(n);
//         if(length>len){
//             len=length;
//         }
//     }
//     return len;
// }
// int main(){
//     int x,y;
//     while(cin>>x>>y){
//         cout<<x<<" "<<y<<" ";
//         cout<<length(x,y)<<"\n";
//     }
// }
#include <bits/stdc++.h>
using namespace std;

vector<int> cycle;

int cycle_length(int n) {
    int length;
    if (n == 1) {
        length = 1;
    }
    else if (n % 2 == 0) {
        length = 1 + cycle_length(n/2);
    }
    else {
        length = 1 + cycle_length(3*n + 1);
    }
    cycle.push_back(length);
    return length;
}

int max_cycle_length(int i, int j) {
    if (i > j) {
        swap(i, j);
    }
    int max_length = 0;
    for (int n = i; n <= j; n++) {
        int length = cycle_length(n);
        if (length > max_length) {
            max_length = length;
        }
    }
    return max_length;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        cout << i << " " << j << " ";
        cout << max_cycle_length(i, j) << endl;
    }
    return 0;
}