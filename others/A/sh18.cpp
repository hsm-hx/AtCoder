#include <iostream>
#include <string>
using namespace std;

int main(void){
  string x, y;

  cin >> x >> y;
  
  if(x.at(0) == 'S' && y.at(0) == 'H') cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
