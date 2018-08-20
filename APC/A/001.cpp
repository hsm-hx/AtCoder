#include <iostream>
using namespace std;

int main(void){
  int x, y;

  cin >> x >> y;

  if(x%y) cout << x;
  else cout << -1;
  
  cout << endl;

  return 0;
}
