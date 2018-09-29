#include <iostream>
using namespace std;

int main(void){
  string n;
  cin >> n;

  for(int i = 0; i < n.size(); i ++){
    if(n.at(i) == '1') cout << '9';
    else cout << '1';
  }
  cout << endl;

  return 0;
}
