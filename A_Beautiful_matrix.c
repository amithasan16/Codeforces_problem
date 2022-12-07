#include<stdio.h>
#include<math.h>
int main()
{
   int arr[6][6];
   int i,j,row,col;
   for(i=1;i<6;i++)
 {
    for(j=1;j<6;j++)
    {
        scanf("%d",&arr[i][j]);
        if(arr[i][j]==1)
        {
            row=abs(3-i);
            col=abs(3-j);
            printf("%d",row+col);
        }
    }
 }
   return 0;
}