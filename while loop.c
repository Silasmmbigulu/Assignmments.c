//a while loop program
#include <stdio.h>
int main () {
   int start,stop;

   //prompting the user for values
   printf("Enter a value when to start:");
   scanf("%d", &start);
   printf("Enter a value when to stop:");
   scanf("%d", &stop);

   int i=start;
   while (i<=stop){
    printf("%d\n",i);
   i++;
}
   return 0;
}
