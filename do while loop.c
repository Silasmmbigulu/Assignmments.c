//while do loop program
#include <stdio.h>
int main () {
 int start,stop, i=start;

  //prompting the user for values

  printf("Enter a value when to start:");
  scanf("%d", &start);
  printf("Enter a value when to stop:");
  scanf("%d", &stop);

  do{
    printf("%d\n",i);
    i++;
  } while (i<=stop);
  return 0;
}






