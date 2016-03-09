/*
Exercise url: http://www.learn-c.org/en/While_loops

The array variable consists of a sequence of eleven numbers. Inside the while loop,
you must write two if conditions, which change the flow of the loop in the
following manner (without changing the printf command):

If the current number which is about to printed is less than 5, don't print it.
If the current number which is about to printed is greater than 10, don't print
it and stop the loop.

*/

#include <stdio.h>
int array[11]={1,2,3,4,5,6,7,8,9,10,11};
int main() {
  /* code */
  int index = 1;
  while(1){
    if (array[index]<5){
      index++;
      continue;
    }else if(array[index]>=5 && array[index]<=10){
      index++;
    }else if(array[index]>=10){
      break;
    }
    printf("array[%d] value is %d\n",index,array[index]);
  }
  return 0;
}
