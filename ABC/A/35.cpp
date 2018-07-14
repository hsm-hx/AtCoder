#include <bits/stdc++.h>
using namespace std;

int main(void){
  int w, h;
  
  cin >> w >> h;

  cout << (w%(h/3)?"16:9":"4:3") << endl;

  return 0;
}