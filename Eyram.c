#include <stdio.h>

int main()
{
    int i, j, exit, Prime, sum=0;

    
    printf("Find sum of all prime in between 1  : ");
    scanf("%d", &exit);

    
    for(i=2; i<=exit; i++)
    {

        
        Prime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                
                Prime = 0;
                break;
            }
        }

        
        if(Prime==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to %d = %d", exit, sum);

    return 0;
}