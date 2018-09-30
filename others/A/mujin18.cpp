#include <iostream>
#include <string>
using namespace std;

int main(void){
  string s;

  cin >> s;
  
  if(s.find("MUJIN") == 0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
