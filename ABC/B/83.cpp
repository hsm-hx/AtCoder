#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
  int sum=0;
  if (n<0) return 0;
  while (n>0) {
    sum += n%10;
    n /= 10;
  }
  return sum;
}
int main(void){
  int n, a, b;
  cin >> n >> a >> b;

  int res = 0; 

  for(int i = 1; i <= n; i ++){
    if(a <= sum(i) && sum(i) <= b) res += i;
  }

  cout << res << endl;

  return 0;
}
