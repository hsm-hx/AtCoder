#include <iostream>
using namespace std;

int main(void){
  char b;
  cin >> b;

  if(b == 'A') cout << 'T' << endl;
  if(b == 'T') cout << 'A' << endl;
  if(b == 'C') cout << 'G' << endl;
  if(b == 'G') cout << 'C' << endl;

  return 0;
}
