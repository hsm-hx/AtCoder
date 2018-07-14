#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

int main(void){
  string s[3];

  cin >> s[0] >> s[1] >> s[2];
  cout << toupper(s[0].front()) << toupper(s[1].front()) << toupper(s[2].front()) << endl;

  return 0;
}