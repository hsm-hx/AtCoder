#include <iostream>
using namespace std;

int main(void){
  int a, b, c, s;

  cin >> a >> b >> c >> s;

  int sum = a + b + c;
  int diff = sum - s;

  if(diff >= -3 && diff <= 0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
