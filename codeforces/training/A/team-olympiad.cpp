#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> math, prog, pe;

  int student;
  for (int i = 0; i < n; i++) {
    cin >> student;
    switch (student) {
    case 1:
      prog.push_back(i + 1);
      break;
    case 2:
      math.push_back(i + 1);
      break;
    case 3:
      pe.push_back(i + 1);
      break;
    }
  }
  int teams = min(min(math.size(), prog.size()), pe.size());
  cout << teams << endl;

  for (int i = 0; i < teams; i++) {
    cout << prog[i] << ' ' << math[i] << ' ' << pe[i] << endl;
  }
}
