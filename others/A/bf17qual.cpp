#include <iostream>
using namespace std;

int main(void){
  int a, b;

  cin >> a >> b;

  int i = 0;
  for(i = 1; i*b <= a; i ++);

  cout << (i-1)*b << endl;

  return 0;
}
