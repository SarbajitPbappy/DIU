#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    
    int M[N][N];
    
    for(int i = 0;i<N;++i)
        for(int j = 0;j<N;++j)
            cin>>M[i][j];
    
    for(int i = 0;i<2*N-1;++i){
        for(int c = 0;c<=i && c<N;++c){
            int r = i-c;
            if(r>=0 && r<N) cout<<M[r][c]<<" ";
        }
    }
    
    return 0;
}