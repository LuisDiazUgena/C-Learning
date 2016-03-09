
#include <stdio.h>

int main(){
  int a=2,c=15;
  float b = 20.123;

  float d = a + b + c;

  printf("sum is %.2f\n",d);

  int items = 10;
  int array[items];

  for (int i = 0; i < items; i++) {
    array[i]=i*10;
  }
  for (int i = 0; i < items; i++){
    printf("Array[%d] = %d\n",i,array[i]);
  }
}
