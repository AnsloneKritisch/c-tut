// WAP to find all the Amstrong Number between the given range .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , i , j , r , amg;

    printf("Enter the Starting range : ");
    scanf("%d",&a);

    printf("Enter the Ending range : ");
    scanf("%d",&b);

    printf("All the Amstrong Number in the given range is : ") ;

    for (i = a ; i <= b ; i++) 
    {
        amg = 0 ;
        j = i ;
        for (; j>0 ;)
        {
            r = j % 10 ;
            amg = amg + (r*r*r) ;
            j = j /10;
        }

        if ( amg == i)
        {
            printf(" \n %d  ",i);
        }

    }
    
    getch();

    return 0;

}
