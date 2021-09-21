// WAP to find all the Amstrong Number between the given range .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , i , j , r , amg=0 ;

    printf("Enter the Starting range : ");
    scanf("%d",&a);

    printf("Enter the Ending range : ");
    scanf("%d",&b);

    for (i = a ; i >= b , i++)
    {
        amg = 0 ;

        for (; j>0 ;)
        {
            r = j % 10 ;
            amg = amg + (r*r*r) ;
            j = j /10;
        }

        if ( amg == i)
        {
            printf("yes %d is an Amgstrong Number. ",i);
        }
        else
        {
            printf("NO %d is not an Amgstrong Number.",i);
        }
    }
    
    getch();

    return 0;

}
