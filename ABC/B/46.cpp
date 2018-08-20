#include <iostream>
using namespace std;

int main(void){
  int n, k;
  int result = 0;

  cin >> n >> k;

  for(int i = 0; i < n; i ++){
    if(i == 0) result = k;
    else result *= k-1;
  }

  cout << result << endl;

  return 0;
}
