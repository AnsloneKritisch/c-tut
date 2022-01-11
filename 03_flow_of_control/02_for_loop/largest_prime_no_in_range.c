// WAP to find the largest prime no. in the given range. 

#include <stdio.h>
#include <conio.h>
int main()
{
    int sr,er,i,c=0,j;
    printf("Enter The Starting Range:");
    scanf("%d",&sr);
    
    printf("Enter The Ending Range:");
    scanf("%d",&er);
    
    for(i=er;i>=sr;i--)
    {
        c=0;
        for( j = 1 ; j <= i ; j++)
        {
            if(i%j==0)

            ++c;
        }
        
        if(c==2)

        {
            printf("THe Largest Prime number in the given range is : %d " , i) ;
            break;
        }
    }

    getch();

    return 0;
}
