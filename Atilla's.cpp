#include <bits/stdc++.h>

int main()
{
    int t,i;
    scanf("%d",&t);
     while(t--)
     {
        int n;
        scanf("%d",&n);
        char c;
        scanf("%c",c);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=int(c[i]-'a');
        }
        printf("%d",ans+1);
        
     }
}