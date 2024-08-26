#include <iostream>
#include <string>

using namespace std;

string all_lower(string s) {
  string n;
  for (int i = 0; i < s.size(); i++) {
    n += tolower(s[i]);
  }
  return n;
}
string all_upper(string s) {
  string n;
  for (int i = 0; i < s.size(); i++) {
    n += toupper(s[i]);
  }
  return n;
}

int main() {
  string s;
  cin >> s;
  int l = 0, u = s.size();

  for (int i = 0; i < u; i++) {
    if ((int)s[i] > 90)
      l++;
  }
  u -= l;
  if (l >= u)
    cout << all_lower(s) << endl;
  else
    cout << all_upper(s) << endl;
}
