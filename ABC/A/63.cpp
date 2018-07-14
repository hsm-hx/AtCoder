#include<bits/stdc++.h>
using namespace std;

int main(void){
  int a, b;

  cin >> a >> b;
  
  cout << (((a+b)>=10) ? "error" : to_string(a+b)) << endl;

  return 0;
}