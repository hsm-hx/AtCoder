#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

int main(void){
  int a, b;

  cin >> a >> b;

  if(a == b) cout << "Draw" << endl;
  else if(a == 1 || b == 1)
    cout << ((a<b)?"Alice":"Bob") << endl;
  else 
    cout << ((a>b)?"Alice":"Bob") << endl;

  return 0;
}