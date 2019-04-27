#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int n;
  vector<int> a(100);
  vector<int> c(9);
  cin >> n;
  for(int i = 0; i < n; i ++)
    cin >> a.at(i);
  
  for(int i = 0; i < n; i ++){
    if(a.at(i) < 400) c.at(0) ++;
    else if(a.at(i) < 800) c.at(1) ++;
    else if(a.at(i) < 1200) c.at(2) ++;
    else if(a.at(i) < 1600) c.at(3) ++;
    else if(a.at(i) < 2000) c.at(4) ++;
    else if(a.at(i) < 2400) c.at(5) ++;
    else if(a.at(i) < 2800) c.at(6) ++;
    else if(a.at(i) < 3200) c.at(7) ++;
    else c.at(8) ++;
  }
  int r = 0;
  for(int i = 0; i < 8; i ++){
    if(c.at(i) != 0) r ++;
  }
  
  if(r != 0){
    cout << r << " ";
    r += c.at(8);
    cout << r << endl;
  }
  else cout << "1 " << c.at(8);
  
  return 0;
}
