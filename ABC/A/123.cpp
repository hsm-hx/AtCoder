#include <iostream>
using namespace std;

int main(void){
  int a, b, c, d, e, k;
  cin >> a >> b >> c >> d >> e >> k;

  if((e-a) < k) cout << "Yay!" << endl;
  else cout << ":(" << endl;

  return 0;
}
