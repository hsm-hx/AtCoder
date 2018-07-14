#include<bits/stdc++.h>
using namespace std;

int main(void){
  int x;

  cin >> x;

  // x/100:上1桁 x%100:下2桁 x%100%10:下2桁の下1桁
  if(x/100 == x%100%10) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}