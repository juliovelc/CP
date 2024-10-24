#include <iostream>
#include <vector>

using namespace std;

bool isRated(vector<int> start, vector<int> end, int n) {
  for (int i = 0; i < n; i++) {
    if (start[i] != end[i])
      return true;
  }
  return false;
}

bool isNotRated(vector<int> start, vector<int> end, int n) {
  for (int i = 1; i < n; i++) {
    if (start[i - 1] < start[i]) {
      return true;
    }
  }
  return false;
}

int main() {
  int n;
  cin >> n;
  vector<int> start(n);
  vector<int> end(n);

  for (int i = 0; i < n; i++) {
    cin >> start[i];
    cin >> end[i];
  }

  if (isRated(start, end, n)) {
    cout << "rated" << endl;
    return 0;
  }
  if (isNotRated(start, end, n))
    cout << "unrated" << endl;
  else
    cout << "maybe" << endl;
}
