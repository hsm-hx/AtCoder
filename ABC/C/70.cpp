#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long int a, long long int b){
  if(b == 0) return a;
  
  return gcd(b, a % b);
}
long long lcm(long long int a, long long int b){
  long long g = gcd(a, b);
  return a / g * b;
}

int main(void){
  int n;
  vector<long long int> t(100);
  
  cin >> n;
  for(int i = 0; i < n; i ++){
    cin >> t.at(i);
  }
  
  long long int temp = 1;
  for(int i = 0; i < n; i ++){
    temp = lcm(temp, t.at(i));
  }
  
  cout << temp << endl;
}
