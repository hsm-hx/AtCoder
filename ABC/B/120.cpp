#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  int a, b, k;
  cin >> a >> b >> k;

  int count = 0, res = 1;
  for(int i = min(a,b); i != 0; i --){
    if(a%i == 0 && b%i == 0){
      count ++;
      res = i;
    }
    if(count == k)
      break;
  }

  cout << res << endl;

  return 0;
}
