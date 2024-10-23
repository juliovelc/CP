#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<bool> alpha(26);
  string s;
  getline(cin, s);

  int letter, res = 0;
  for (int i = 0; i < s.size(); i++) {
    letter = s[i] - 'a';
    if (letter >= 0 && letter < 26 && !alpha[letter]) {
      res++;
      alpha[letter] = true;
    }
  }
  cout << res << endl;
}
