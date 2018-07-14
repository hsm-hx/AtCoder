#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

int main(void){
  int a, b;

  cin >> a >> b;

  cout << ((a+b) < 24 ? a+b : a+b-24) << endl;

  return 0;
}