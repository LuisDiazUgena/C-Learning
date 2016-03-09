/*
Exercise url: http://www.learn-c.org/en/Functions

Write a function called print_big which receives one argument (an integer) and
prints the line x is big if the argument given to the function is a number
bigger than 10.

*/

#include <stdio.h>

//Declare functions

void printIfBig(int number);

int main(){
  printIfBig(10);
  return 0;
}

void printIfBig(int number){
  if (number > 10){
    printf("%d is bigger than 10\n",number );
  }else{
    printf("%d is not bigger than 10\n",number );
  }
}
