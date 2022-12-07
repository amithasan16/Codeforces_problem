#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",ch);
    for(i=1;i<n;i++)
    
        if(ch[i-1]==ch[i])
        
            count++;
        
    
    printf("%d",count);
}