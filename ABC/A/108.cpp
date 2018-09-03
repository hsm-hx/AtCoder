#include <iostream>
using namespace std;

int main(void){
  int k;

  cin >> k;

  if(k%2)
    cout << k/2 * (k+1)/2;
  else
    cout << k/2 * k/2;

  cout << endl;

  return 0;
}
