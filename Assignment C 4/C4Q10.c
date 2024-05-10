
//question 10
#include <stdio.h>
int main()
{
    int i,j,n=5;
    //outer loop 
    for(i=0;i<=n;i++)
    { 
        //inner loop
        for(j=0;j<i;j++)
        {
            printf("%c",'a'+j);
        }
        printf("\n");
    }
}