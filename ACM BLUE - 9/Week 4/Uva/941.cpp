#include <bits/stdc++.h>

using namespace std;

string find_kth_permutation(string s, int k) {
  // Create a list of all the permutations of s.
  vector<string> permutations;
  for (int i = 0; i < s.size(); i++) {
    for (int j = i + 1; j <= s.size(); j++) {
      permutations.push_back(s.substr(0, i) + s.substr(j, 1) + s.substr(i + 1, j - i - 1) + s.substr(j + 1));
    }
  }

  // Sort the permutations in lexicographical order.
  sort(permutations.begin(), permutations.end());

  // Return the kth permutation.
  return permutations[k - 1];
}

int main() {
  // Read the number of samples.
  int num_samples;
  cin >> num_samples;

  // Read the input for each sample.
  for (int i = 0; i < num_samples; i++) {
    string s;
    cin >> s;
    int k;
    cin >> k;

    // Find the kth permutation of s.
    string result = find_kth_permutation(s, k);

    // Print the result.
    cout << result << endl;
  }

  return 0;
}
