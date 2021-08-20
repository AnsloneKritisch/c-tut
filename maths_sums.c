/*
These are mainly used with 
 for integer -> %d
 for float   -> %f
 for string  -> %s

*/
//WAP to find out the area of a circle ( use float values only )

#include <stdio.h>
#include <conio.h>

int main()

{

//WAP to find area of circle 

    float r = 4.5 , area1 ;
    area1 = 3.14 * r * r ;
    printf(" The area of the circle is = %f \n ",area1 ) ;

// WAP to find area of Rectangle

    int l = 10 , b = 20 , area ;
    area = 2 * ( l + b ) ;
    printf(" The area of the Rectangle is = %d \n ", area) ;
    
    getch() ;



    return 0;
}

/*
// WAP to find area of Rectangle

#include <stdio.h>
#include <conio.h>

int main1()

{
    int l = 10 , b = 20 , area ;
    area = 2 * ( l + b ) ;
    printf(" The area of the Rectangle is = %d \n ", area) ;
    
    getch() ;

    return 0;
}
 */