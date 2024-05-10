//question 7
#include <stdio.h>
int main()
{
    int i,j,n=4;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",'A'+i);
        }
        printf("\n");
    }
}