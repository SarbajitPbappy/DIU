#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#define ign cin.ignore()
#define gets(s) getline(cin,s)
#define cu(s) cout << s << endl;

int main(){
    int test;
    cin >> test;
    ign;

    while(test--){
        string s;
        gets(s);

        string word;
        string result = "";

        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                reverse(word.begin(), word.end());
                result += word + " ";
                word = "";
            }
            else{
                word += s[i];
            }
        }

        reverse(word.begin(), word.end());
        result += word + " ";
        result.pop_back();
        cu(result);
    }
    return 0;
}
