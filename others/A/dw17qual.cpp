#include <iostream>
using namespace std;

int main(void){
  int n, a, b;
  cin >> n >> a >> b;

  int res = abs(b - abs(n-a));

  if(n >= a+b) cout << 0 << endl;
  else cout << res << endl;

  return 0;
}
