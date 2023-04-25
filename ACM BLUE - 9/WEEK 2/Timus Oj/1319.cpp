#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    int k = 0;;
    for(int i = 0;i<2*n-1;++i){
        for(int r = 0;r<=i && r<n;++r){
            int c = i-r;
            if(c>=0 && c<n) arr[r][c] = ++k;
        }
    }
    for(int i = 0;i<n;++i){
        for(int j = n-1;j>=0;--j) cout<<arr[i][j]<<" ";
        putchar('\n');
    }
    return 0;
}
