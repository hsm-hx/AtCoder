#include <bits/stdc++.h>
using namespace std;

int main(void){
  int a, b, i;

  cin >> a >> b;

  for(i = 1; a*i<b; i++);
  cout << i << endl;

  return 0;
}