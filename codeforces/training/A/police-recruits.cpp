#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int crimes = 0, officers = 0, event;

  for (int i = 0; i < n; i++) {
    cin >> event;
    if (event == -1) {
      if (officers > 0)
        officers--;
      else
        crimes++;
    } else {
      officers += event;
    }
  }
  cout << crimes << endl;
}
