//C-arrays 3D-array
#include <stdio.h>
int main () {
//declaration
int i,j,k;
int marks[2][2][3]={
{{40,36,55},
  {50,53,43}},
  {{48,56,59},
  {52,63,39}}
  };
   for (i=0;i<2;i++){
    for(j=0;j<2;j++){
        for (k=0;k<3;k++){
            printf("marks [%d][%d][%d]=%d\n",i,j,k, marks[i][j][k]);
        }
    }
   }
   return 0;
}
