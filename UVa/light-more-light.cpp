#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int ni;
  for (int i = 0; i < n; i++) {
    cin >> ni;
    if (ni == 0) {
      cout << "no" << endl;
      continue;
    }
    int sq = sqrt(ni);
    if (sq * sq == ni)
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }
}
