#include <iostream>
using namespace std;

int main(void){
  int n, x = 0;
  int max = 0;
  string s;

  cin >> n >> s;

  for(int i = 0; i < s.size(); i ++){
    if(s.at(i) == 'I'){
      x ++;
      if(max < x) max = x;
    }
    else x --;
  }

  cout << max << endl;

  return 0;
}
