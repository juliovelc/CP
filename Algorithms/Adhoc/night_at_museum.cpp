
#include <iostream>
#include <string>

using namespace std;

//Problem: https://codeforces.com/contest/731/problem/A
int main() {
  string s;
  cin >> s;

  char start = 'a';
  int mini, maxi, steps = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= start){
      maxi = s[i];
      mini = start;
    }
    else {
      maxi = start;
      mini = s[i];
    }
    steps += min(26-maxi+mini, maxi - mini);
    start = s[i];
  }
  cout << steps << endl;
}



