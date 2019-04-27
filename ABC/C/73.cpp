#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int n;
  vector<int> a(100000, 10000001);
  cin >> n;
  for(int i = 0; i < n; i ++){
    cin >> a.at(i);
  }
  
  int c = 0;
  sort(a.begin(), a.begin()+n);
    
  for(int i = 0; i < n; i ++){
    int temp = 0;
    for(int j = i; j < n; j ++){
      if(a.at(i) == a.at(j)) temp ++;
      else break;
    }
    if(temp % 2) c ++;
    i += temp-1;
  }
  cout << c << endl;
  
  return 0;
}
