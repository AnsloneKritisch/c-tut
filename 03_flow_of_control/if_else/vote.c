// WAP to check , a person is eligible for vote or not .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a ;

    printf("write your age = ") ;
    scanf("%d" , &a ) ;

    if (a >= 18)
    {
        printf(" You can give vote \n ") ;
    }
    else 
    printf(" You cannot give vote \n ") ;

    getch() ;
    
    return 0;
}
