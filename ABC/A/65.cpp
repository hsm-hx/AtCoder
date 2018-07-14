#include<bits/stdc++.h>
using namespace std;

int main(void){
  int x, a, b;

  cin >> x >> a >> b;
  
  if(a-b>=0) cout << "delicious" << endl;
  else if(b-a<=x) cout << "safe" << endl;
  else cout << "dangerous" << endl;

  return 0;
}