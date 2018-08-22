#include <iostream>
using namespace std;

int main(void){
  int k, s;
  int count = 0;

  cin >> k >> s;

  for(int i = 0; i <= k; i ++){
    for(int j = 0; j <= k; j ++){
      if(s-i-j <= k && s-i-j >= 0) count ++;
    }
  }

  cout << count << endl;

  return 0;
}
