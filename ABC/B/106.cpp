#include <iostream>
using namespace std;

int main(void){
  int n, pcs = 0;

  cin >> n;

  for(int i = 1; i <= n; i ++){
    if(i % 2){
      int cnt = 0;
      for(int j = 1; j <= i; j ++){
        if(i % j == 0)
          cnt ++;
      }
      if(cnt == 8)
        pcs ++;
    }
  }
  
  cout << pcs << endl;

  return 0;
}

