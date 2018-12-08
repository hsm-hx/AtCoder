#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int n;
  vector<int> p(10);
  cin >> n;
  int price = 0;
  for(int i = 0; i < n; i ++){
    cin >> p.at(i);
    price += p.at(i);
  }

  int max = *max_element(p.begin(), p.end());

  cout << price - max/2 << endl;

  return 0;
}
