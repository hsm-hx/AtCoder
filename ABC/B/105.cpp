#include <iostream>
using namespace std;

int main(void){
  int n, sum;

  cin >> n;

  for(int i = 0; i <= n/7; i ++){
    sum = 0;
    for(int j = 0; sum < n; j ++){
      sum = i*7 + j*4;
      if(sum == n){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
