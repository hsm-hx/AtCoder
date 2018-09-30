#include <iostream>
using namespace std;

int main(void){
  int sum = 0;

  for(int i = 1; i <= 100; i ++){
    if(i%3 && i%5) sum += i;
  }

  cout << sum << endl;

  return 0;
}
