#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<bool> levels(n + 1);

  int l, p, q;
  cin >> l;
  for (int i = 0; i < l; i++) {
    cin >> p;
    levels[p] = true;
  }

  cin >> l;
  for (int i = 0; i < l; i++) {
    cin >> q;
    levels[q] = true;
  }

  for (int i = 1; i < n + 1; i++) {
    if (!levels[i]) {
      cout << "Oh, my keyboard!" << endl;
      return 0;
    }
  }
  cout << "I become the guy." << endl;
}
