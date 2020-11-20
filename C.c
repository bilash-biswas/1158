#include<stdio.h>
int main()
{
    int i,j,s=0,n,a[10000],b[10000],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            for(k=1,j=a[i]+1;k<=b[i];k++,j=j+2)
            {
               s=s+j;
            }
        }
        if(a[i]%2==1)
        {
            for(k=1,j=a[i];k<=b[i];k++,j=j+2)
            {
               s=s+j;
            }
        }
        printf("%d\n",s);
        s=0;
    }

    return 0;
}

