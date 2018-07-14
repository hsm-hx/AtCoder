#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

int main(void){
  int a, b, c;

  cin >> a >> b >> c;

  cout << ((a-b) == (b-c) ? "YES" : "NO" ) << endl;

  return 0;
}