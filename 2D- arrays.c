// C arrays - 2D-arrays
#include <stdio.h>
int main () {
int i,j;
//declaration
int marks[2][3]={{50,73,65},{45,66,64}};
 for(i=0;i<2;i++){
    for (j=0;j<3;j++){
        printf("marks [%d][%d]=%d\n", i,j, marks[i][j]);
    }
 }
 return 0;
}
