#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  char pixel;

  for (int i = 0; i < n * m; i++) {
    cin >> pixel;
    if (pixel == 'M' || pixel == 'Y' || pixel == 'C') {
      cout << "#Color" << endl;
      return 0;
    }
  }
  cout << "#Black&White" << endl;
}
