// Preprocessor Directive is nothing just a way to convert a local variable into global variable.
// WAP without writting the value of pi many times. Find circumference of circle.

#include <stdio.h>
#include <conio.h>
# define pi 3.14
int main()
{
    float rad , area , cir ;

    printf("enter the radius of the circle : ");
    scanf("%f",&rad) ;

    printf("\n");

    area = pi * rad *rad ;
    printf(" Area of the Circle is : %f ",area);

    printf("\n");

    cir = 2.0 * pi * rad ;
    printf(" The Circumference of the cricle is : %f ",cir);

    printf("\n");

    getch();    
    return 0;
}


