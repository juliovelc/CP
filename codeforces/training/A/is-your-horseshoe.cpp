#include <iostream>
#include <vector>

using namespace std;
vector<int> colors;

bool hasColor(int n) {
  for (int i = 0; i < colors.size(); i++) {
    if (n == colors[i])
      return true;
  }
  return false;
}
int main() {
  vector<int> v(4, 0);

  int res = 0;
  for (int i = 0; i < 4; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < 4; i++) {
    if (hasColor(v[i])) {
      res++;
    } else {
      colors.push_back(v[i]);
    }
  }
  cout << res << endl;
}
