#include <iostream>
using namespace std;

int f(int n){
  return ((n*n + 4.0)/8.0);
}

int main(void){
  cout << f(f(f(20))) << endl;

  return 0;
}
