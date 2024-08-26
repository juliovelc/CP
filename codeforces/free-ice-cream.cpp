#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  long long x;
  cin >> n >> x;

  int distress = 0, p;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s >> p;
    switch (s[0]) {
    case '+':
      x += p;
      break;

    case '-':
      if (x >= p)
        x -= p;
      else
        distress++;
      break;
    }
  }
  cout << x << ' ' << distress << "\n";
}
