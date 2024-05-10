/*  0*
    **00
    000***
    ****0000   */
#include <stdio.h>
int main()
{
    int i,j,k,n=5;
    // printf("enter iput= ");
    // scanf("%d",&n);
    for(i=0;i<n;i++)
     {
        
        {
          for(j=0;j<i;j++)
         {
            if(i%2==0)
             printf("*");
             else printf("0");
         }
          for(k=0;k<i;k++)
         {
            if(i%2==0)
            printf("0");
            else printf("*");
         }
         printf("\n");
        }
        // else if(i%2!=0)
        // {
        //      for(j=0;j<i;j++)
        //  {
        //      printf("0");
        //  }
        //  for(k=0;k<i;k++)
        //  {
        //     printf("*");
        //  }
        //  printf("\n");
        // }
            
     }
    
}