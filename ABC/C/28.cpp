#include <iostream>
#include <vector>
using namespace std;

int main(void){
  vector<int> a(5);
  for(int i = 0; i < 5; i ++)
    cin >> a.at(i);

  cout << max(a.at(1)+a.at(2)+a.at(4), a.at(0)+a.at(3)+a.at(4)) << endl;

  return 0;
}
