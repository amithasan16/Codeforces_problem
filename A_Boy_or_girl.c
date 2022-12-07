#include<stdio.h>
int main()
{
    int i,j,flag=0,count=0;
 char arr[100];
 scanf("%s",arr);
 for(i=0;arr[i]>'\0';i++)
 {
    for(j=i-1;j>=0;j--)
    {
        if(arr[i]==arr[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        count++;
        flag=0;
 }
if(count%2==0)
printf("CHAT WITH HER!");
else
printf("IGNORE HIM!");
}
    