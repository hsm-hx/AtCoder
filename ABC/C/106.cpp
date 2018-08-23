#include <iostream>
using namespace std;

int main(void){
  string s;
  int k;

  cin >> s >> k;

  for(int i = 0; i < k; i ++){
    if(s.at(i) != '1'){
      cout << s.at(i) << endl;
      return 0;
    }
  }

  cout << "1" << endl;

  return 0;
}
