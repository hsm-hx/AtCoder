#include <iostream>
using namespace std;

int main(void){
  int n;
  int pw = 1;

  cin >> n;

  for(long long int i = 2; i <= n; i ++)
    pw = (i*pw) % 1000000007;

  cout << pw << endl;
  
  return 0;
}
