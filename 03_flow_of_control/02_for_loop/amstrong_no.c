// WAP to check a number is Amstrong Number or not .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , p , r , amg=0;

    printf("Enter the number :");
    scanf("%d",&a);

    p = a ;

    for (;p>0;)
    {
        r = p%10 ;
        amg = amg + (r*r*r) ;
        p = p/10 ;
    }

    if (amg == a)
    {
        printf("Yes %d is an Amstrong number. ",a) ; 
    }
    else
    {
        printf("No %d is not an Amstrong number. ",a);
    }


    getch();
       
    return 0;

}
