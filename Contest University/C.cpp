#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    vector<string> words;
    string word;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == ' ' || input[i] == '\"') {
            continue;
        }
        word = "";
        while (i < input.size() && input[i] != ' ' && input[i] != '\"') {
            word += input[i];
            i++;
        }
        words.push_back(word);
    }
    sort(words.begin(), words.end());
    cout<<"\"";
    for (int i = 0; i < words.size(); i++) {
        cout<< words[i];
        if (i != words.size() - 1) {
            cout << " ";
        }
    }
    cout<<"\"";
    cout << endl;

    return 0;
}
