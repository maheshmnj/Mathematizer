#include<stdio.h>
#include<conio.h>
int main()
{   int r, i=1;
    printf("rows\n");
    scanf("%d",&r);

    for(i; i<=r; i++)
    {
      if(i%2==0)
      goto h;
        for(int j=1; j<=i; j++)
        {
          
            printf("*");


            

            

            
        }
    h:
    printf("\n");
     }
    
    
    return 0;
}
