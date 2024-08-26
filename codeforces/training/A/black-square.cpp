#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> n(4);
  string s;
  cin >> n[0] >> n[1] >> n[2] >> n[3];
  cin >> s;

  int cal = 0;
  for (int i = 0; i < s.size(); i++) {
    switch (s[i]) {
    case '1':
      cal += n[0];
      break;
    case '2':
      cal += n[1];
      break;
    case '3':
      cal += n[2];
      break;
    case '4':
      cal += n[3];
      break;
    }
  }
  cout << cal << "\n";
}
