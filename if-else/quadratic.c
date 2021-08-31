// WAP to find a quadratic equation .

#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    float a,b,c,dis,r1,r2 ;

    printf(" Enter the first co-efficient : ") ;
    scanf( "%f" , &a ) ;
    
    printf(" Enter the second co-efficient : ") ;
    scanf( "%f" , &b ) ;
    
    printf(" Enter the third co-efficient : ") ;
    scanf( "%f" , &c ) ;

    printf("The equation write is \n %fx^2 + %fx + %f \n ",a,b,c) ;

    dis = b*b - (4.0 * a *c) ;
    printf("The value of discriminant is %f \n " , dis ) ;

    if (dis > 0.0 )
    {
        r1 = (-b + sqrt(dis)) / (2.0 * a ) ;
        r2 = (-b - sqrt(dis)) / (2.0 * a ) ;
        printf(" The first root is = %f " , r1 ) ;
        printf(" The second root is = %f " , r2 ) ;
    }
    else if ( dis == 0.0 )
    {
        r1 = -b / (2.0 * a ) ;
        printf(" The root is = %f " , r1 ) ;
    }
    else if ( dis < 0.0 )
    {
        printf(" No real root because %f is less than 0 \n " , dis ) ;
    }

    getch() ;
    
    return 0;
}
