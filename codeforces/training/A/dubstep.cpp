#include <iostream>
#include <string>

using namespace std;


int main () {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (i + 2 >= s.size())
      break;
    if (s[i]=='W' && s[i+1] =='U' && s[i+2]=='B') {
      s[i] = '.';
      s[i+1] = '.';
      s[i+2] = '.';
    }
  }
  bool spaces = false;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '.') {
      cout << s[i];
      spaces = true;
    }
    else {
      if (spaces) {
        spaces = false;
        cout << ' ';
      }
    }
  }
}
