#include<bits/stdc++.h>
using namespace std;

int main(void){
  int a, b, c;

  cin >> a >> b >> c;

  cout << a+b+c-max({a,b,c}) << endl;

  return 0;
}