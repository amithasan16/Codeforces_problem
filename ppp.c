#include<stdio.h>
int main()
{
    int i,n=3,max,min,t;
    scanf("%d",&t);
    int arr[n];
    for(i=0;i<t;i++)
    {
        for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        max=arr[0];
        if(max<arr[i])
        {
            max=arr[i];
            printf("%d\n",arr[i]);
        }
    }
    }
}
