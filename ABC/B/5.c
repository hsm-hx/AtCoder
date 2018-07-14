#include <stdio.h>

int main(void){
  int N, T[100];

  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &T[i]);
  }

  int min = T[0];
  for(int i=1; i<N; i++){
    if(T[i] < min){
      int temp = T[i];
      T[i] = min;
      min = temp;
    }
  }

  printf("%d\n", min);

  return 0;
}