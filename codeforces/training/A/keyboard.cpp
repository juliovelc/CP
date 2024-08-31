#include <iostream>
#include <string>

using namespace std;

char getFixedLetter(int fix, char l) {
  string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
  for (int i = 0; i < 30; i++) {
    if (kb[i] == l) {
      return kb[i + fix];
    }
  }
  return ' ';
}

int main() {
  string op, s;
  cin >> op >> s;

  int fix = op == "R" ? -1 : 1;
  for (int i = 0; i < s.size(); i++) {
    s[i] = getFixedLetter(fix, s[i]);
  }
  cout << s << endl;
}
