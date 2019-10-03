#include<stdio.h>

int main()
{
    int i,j,a,n=0;
    do
    {
         scanf("%d",&a);
    }
    while(a<2||a>29||a%2==0);
    {
        for(j=1;j<=a;j++)
        {
            for(i=1;i<=a;i++)
            {
                if(i==j||i==a-j+1)
                {
                    printf("%d",j%10);
                }
                else
                {
                    printf("-");
                }
            }
            printf("\n");
        }
    }
}