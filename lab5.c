#include <stdio.h>
int main()
{
    int a[6][3];
    int i,p,m,n;
    m=0;
    for(i=0;i<=2;i++)
    {
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    }  
    for(i=3;i<=5;i++)
    {
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    } 
    for(i=0;i<=2;i++)
    {
        for(p=0;p<=2;p++)
        {
            printf("%d\t",a[i][p]+a[i+3][p]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<=2;i++)
    {
        for(p=0;p<=2;p++)
        {
            printf("%d\t",a[i][p]-a[i+3][p]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<=2;i++)
    {
        for(p=0;p<=2;p++)
        {
            for(n=0;n<=2;n++)
            {
            m=m+a[i][n]*a[n+3][p];
            }
            printf("%d\t",m);
            m=0;
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<=2;i++)
    {
        for(p=0;p<=2;p++)
        {
            printf("%d\t",a[p][i]);
        }
        printf("\n");
    }
    return 0;
}