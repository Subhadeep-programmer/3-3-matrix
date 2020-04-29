#include<stdio.h>
int main()
{
 int number[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 int i,j;
 int diagonal,diagonal1,diagonal2,diagonal3;
 for (i=0;i<3;i++)
 {
   for (j=0;j<3;j++)
   {
     printf("%d",number[i][j]);
   }
   printf("\n");
 }
 diagonal1=number[0][0];
 diagonal2=number[1][1];
 diagonal3=number[2][2];
 printf("%d\t",diagonal1);
 printf("%d\t",diagonal2);
 printf("%d\t",diagonal3);
 diagonal=diagonal1+diagonal2+diagonal3;
 printf("%d",diagonal);
 return 0;
}
