#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
  if(a < b){
    int temp = a;
    a = b;
    b = temp;
  }
  int r = a % b;
  while(r != 0){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

int main(void){
  int n, x;
  vector<int> xx(100000);
  cin >> n >> x;

  for(int i = 0; i < n; i ++){
    cin >> xx.at(i);
  }

  vector<int> sub(99999);
  if(n == 1){
    cout << abs(x - xx.at(0)) << endl;
  }
  else{
    for(int i = 0; i < n-1; i ++){
      sub.at(i) = abs(xx.at(i) - xx.at(i+1));
    }

    vector<int> sub_a(100000);
    for(int i = 0; i < n; i ++){
      sub_a.at(i) = abs(xx.at(i) - x);
    }

    int g = sub.at(0);
    for(int i = 1; i < n-1; i ++){
      g = gcd(g, sub.at(i));
    }

    vector<int> res(100000);
    int i;
    for(i = 0; i < n-1; i ++){
      res.at(i) = gcd(g, sub_a.at(i));
    }

    cout << *max_element(res.begin(), res.begin() + i) << endl;
  }

  return 0;
}
