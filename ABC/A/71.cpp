#include<bits/stdc++.h>
using namespace std;

int main(void){
  int x;

  cin >> x;

  if(x/100 == x/10%10) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}