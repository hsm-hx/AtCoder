#include <iostream>
using namespace std;

int main(void){
  int a, b;
  cin >> a >> b;

  if(a+b == 15) cout << "+" << endl;
  else if(a*b == 15) cout << "*" << endl;
  else cout << "x" << endl;

  return 0;
}
