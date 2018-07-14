#include<bits/stdc++.h>
using namespace std;

int main(void){
  int a, b;

  cin >> a >> b;
  
  cout << (((a+b)%3 && a%3 && b%3) ? "Impossible" : "Possible") << endl;

  return 0;
}