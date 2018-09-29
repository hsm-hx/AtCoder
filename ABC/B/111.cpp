#include <iostream>
using namespace std;

int main(void){
  int n;
  cin >> n;

  for(int i = 1; i <= 9; i ++){
    if(i * 111 < n) continue;
    else{
      cout << i * 111 << endl;
      break;
    }
  }

  return 0;
}
