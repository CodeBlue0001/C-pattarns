#include <stdio.h>
int main()
{
    int i,j,n=5,k,l;
    k=5;
    for(i=1;i<=n;i++)
     {   
        for(j=1;j<=i;j++)
        {    
            l=k+j-i;//5+1-2=4 when i=2,j=1; 5+2-2=5,when i=2,j=2
            printf("%d",l);
            
        }
        
        printf("\n");
        
    }
}