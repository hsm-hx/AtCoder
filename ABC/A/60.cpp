#include <bits/stdc++.h>
using namespace std;

int main(void){
  string a, b, c;

  cin >> a >> b >> c;

  if(a.back() == b.front())
    if(b.back() == c.front())
      cout << "YES" << endl;
    else cout << "NO" << endl;
  else cout << "NO" << endl;

  return 0;
}