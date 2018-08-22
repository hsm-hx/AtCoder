#include <iostream>
using namespace std;

int main(void){
  long int a, b, x;

  cin >> a >> b >> x;

  long int ar, br;

  br = b / x;

  if(a == 0) ar = -1;
  else ar = (a-1) / x;

  cout << br - ar << endl;

  return 0;
}
