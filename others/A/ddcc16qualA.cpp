#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
  float a, b, c;

  cin >> a >> b >> c;

  cout << setprecision(10) << c*b/a << endl;

  return 0;
}
