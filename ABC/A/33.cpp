#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;

  cin >> n;

  if(n/10 != n%1000/10) cout << "DIFFERENT" << endl;
  else if(n%1000/10 != n%1000%100/10) cout << "DIFFERENT" << endl;
  else if(n%1000%100/10 != n%1000%100%10) cout << "DIFFERENT" << endl;
  else cout << "SAME" << endl;

  return 0;
}