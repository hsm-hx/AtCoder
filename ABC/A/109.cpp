#include <iostream>
using namespace std;

int main(void){
  int a, b;
  cin >> a >> b;
  
  for(int i = 1; i <= 3; i ++){
    if((a * b * i) % 2){
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;
  
  return 0;
}

