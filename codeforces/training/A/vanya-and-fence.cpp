#include <iostream>

using namespace std;

int main() {
  int n, h;
  cin >> n >> h;

  int res = 0;
  for (int i = 0; i < n; i++) {
    int height;
    cin >> height;

    if (height > h) {
      res++;
    }
    res++;
  }
  cout << res << "\n";
}
