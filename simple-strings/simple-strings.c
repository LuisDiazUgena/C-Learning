#include <stdio.h>
#include <string.h>

int main() {
  /* code */
  //define a pointer-like string EDITABLE
  char * name1 = "Luis Diaz Ugena";
  //define a static non editable string
  char name2[] = "Luis Diaz Ugena";
  int power = 9000;

  printf("Name1 is %s\n",name1);
  printf("Name2 is %s\n",name2);

  name1 = "Luis Diaz";

  if (strncmp(name1,"Luis",4) == 0){
    printf("%s seems to be interesting...but...\nhow much power does he have?\n\t-He is over %d\n",name1,power);
  }else{
    printf("Out of here!\n");
  }
  return 0;
}
