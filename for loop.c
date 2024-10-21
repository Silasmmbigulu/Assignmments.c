//for loop program
#include <stdio.h>
int main () {
  int start,stop;

  //prompting the user for values
  printf("Enter a value when to start:");
  scanf("%d", &start);
  printf("Enter a value when to stop:");
  scanf("%d", &stop);

  for(int i=start; i<=stop;i++)
  printf("%d\n",i);
  return 0;

}
