#include <iostream>
using namespace std;

int main(void){
  int r;

  cin >> r;

  if(r < 1200) cout << "ABC";
  else if(r < 2800) cout << "ARC";
  else cout << "AGC";

  cout << endl;

  return 0;
}
