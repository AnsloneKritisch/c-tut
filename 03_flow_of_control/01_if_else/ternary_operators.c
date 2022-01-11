// WAP to check a person is eligible vote or not . using Ternary operations .

#include <stdio.h>
#include <conio.h>

int main()
{
    int age ;

    printf("Enter age = ") ;
    scanf("%d" , &age ) ;

    age >= 18 ? printf(" Yes you are eligible \n ") : printf(" Sorry you are not eligible for vote \n ") ;

    getch();
       
    return 0;
}
 