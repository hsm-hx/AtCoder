#include <iostream>
using namespace std;

int main(void){
  int a, b, c, x, y;

  cin >> a >> b >> c >> x >> y;

  int min = 1000000000;

  for(int i = 0; i <= a; i ++){
    for(int j = 0; j <= b; j ++){
      for(int k = 0; k <= 2*c; 
