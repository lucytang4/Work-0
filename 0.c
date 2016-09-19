#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("Problem 2\n");
  int x = 1;
  int y = 2;
  int z = y;
  int sum;
  while (x <= 4000000){
    if (z % 2 == 0){
      sum += z;
    }
    z = x + y;
    x = y;
    y = z;
  }
  printf("%d\n\n", sum);

  
  printf("Problem 6\n");
  x = 1;
  int sum1;
  int sum2;
  int diff;
  for (; x <= 100; x++){ 
    sum1 += x * x; //sum of squares
    sum2 += x; //square of sums
  }
  diff = sum1 - (sum2 * sum2);
  printf("%d\n\n", diff);
  
  return 0;
}
