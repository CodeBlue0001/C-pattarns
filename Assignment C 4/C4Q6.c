#include <stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            // for(int k=1;k<=j;k++)
            if(i%2!=0)
            printf("1 ");
            else 
            printf("0 ");
        }
        printf("\n");
    }
}