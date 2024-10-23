#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> v(26, 0);

  int sum = 0;
  for (int i = 0; i < s.size(); i++) {
    v[s[i] - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    if (v[i] > 0)
      sum++;
  }
  if (sum % 2 == 0)
    cout << "CHAT WITH HER!" << endl;
  else
    cout << "IGNORE HIM!" << endl;
}
