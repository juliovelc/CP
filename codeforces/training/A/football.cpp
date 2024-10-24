#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, goals1 = 1, goals2 = 0;
  cin >> n;
  string s, team1, team2 = "";

  cin >> team1;

  for (int i = 0; i < n - 1; i++) {
    cin >> s;
    if (team2.empty() && s != team1) {
      team2 = s;
    }
    if (s == team2) {
      goals2++;
      continue;
    }
    goals1++;
  }

  if (goals1 > goals2)
    cout << team1 << endl;
  else
    cout << team2 << endl;
}
