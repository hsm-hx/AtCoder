#include<bits/stdc++.h>
using namespace std;

int main(void){
  int x, y;

  cin >> x >> y;

  if(x == 2 || y == 2) cout << "No" << endl;
  else if(y <= 7){
    if(((x%2) && (y%2)) || (!(x%2) && !(y%2)))
      cout << "Yes" << endl;
    else cout << "No" << endl; 
  }
  else if(y > 7){
    if(x > 7){
      if(((x%2)&&(y%2)) || (!(x%2)&&!(y%2)))
        cout << "Yes" << endl;
      else cout << "No" << endl;
    }
    else{
      if(((x%2)&&!(y%2)) || (!(x%2)&&(y%2)))
        cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }


  return 0;
}