//question 5
#include <stdio.h>
int main()
{
    int i,j,n=4;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {   
            if(j!=i)
            printf("0");
            else 
            printf("1");
        }
        printf("\n");
    }
}