#include <iostream>
using namespace std;

int main(void){
  int n, k;

  cin >> n >> k;

  cout << (n%k ? 1 : 0) << endl;

  return 0;
}
