#include <iostream>
using namespace std;

int main(void){
  long long int a, b, k, l;
  cin >> a >> b >> k >> l;

  long long int i, j;

  i = k/l * b + k%l * a;
  j = (k/l + 1) * b;

  cout << min(i, j) << endl;

  return 0;
}

