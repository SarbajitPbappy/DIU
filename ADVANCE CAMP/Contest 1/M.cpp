#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    for(int i=1; i<=test; i++){
        int me,lift;
        cin >> me >> lift;
        int ans=(abs(me-lift)*4)+((me-0)*4);
        cout<<"Case "<<i<<": "<<ans+19<<"\n";
    }
}
//another approach:
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int test;
//     cin >> test;
//     for(int i=1; i<=test; i++){
//         int myPOS,liftPOS;
//         cin >> myPOS >> liftPOS;
//         int total_time = 0;
//         for(int floor=liftPOS; floor>=myPOS; floor--){
//                 if(floor==liftPOS){
//                     total_time += abs(myPOS-liftPOS)*4;
//             }
//         }
//         total_time+=19;
//         total_time +=(myPOS-0)*4;
//         cout<<"Case "<<i<<": "<<total_time<<"\n";
//     }
// }