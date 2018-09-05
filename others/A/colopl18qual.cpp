#include <iostream>
using namespace std;

int main(void){
  int a, b;
  string s;

  cin >> a >> b >> s;

  if(a <= s.size() && s.size() <= b) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
