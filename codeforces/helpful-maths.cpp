#include <iostream>
#include <string>

using namespace std;

void printer(char a, int n, int &plus) {
  for (int i = 0; i < n; i++) {
    if (plus) {
      cout << a << '+';
      plus--;
    } else {
      cout << a;
    }
  }
}

int main() {
  string s, r;
  cin >> s;

  int one = 0, two = 0, three = 0;
  for (int i = 0; i < s.size(); i++) {
    char l = s[i];
    if (l == '1')
      one++;
    if (l == '2')
      two++;
    if (l == '3')
      three++;
  }
  int plus = one + two + three - 1;
  printer('1', one, plus);
  printer('2', two, plus);
  printer('3', three, plus);
  cout << endl;
}
