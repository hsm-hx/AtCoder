#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
  int n;
  vector<double> x(10);
  string u[10];

  cin >> n;
  for(int i = 0; i < n; i ++)
    cin >> x.at(i) >> u[i];

  double sum = 0;
  for(int i = 0; i < n; i ++){
    if(u[i] == "JPY")
      sum += x.at(i);
    else
      sum += x.at(i) * 380000;
  }

  cout << sum << endl;

  return 0;
}
