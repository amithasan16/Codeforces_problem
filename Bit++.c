#include<stdio.h>
int main()
{
    int x;
    int n;
    char instruction[4];
 
    scanf("%d",&n);
    x=0;
    while(n--)
    {
         scanf("%s",instruction);
 
        if(instruction[1]=='-')
        {
            x--;
        }
        if(instruction[1]=='+')
        {
            x++;
        }
    }
    printf("%d\n",x);
 
    return 0;
}
 


 
 
