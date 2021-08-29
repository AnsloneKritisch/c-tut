// WAP To take input and do different operations :
/* 
For a int value scanf("%d") 
For a float value scanf("%f") 
For a string value scanf("%s")

scanf("%f" , &a ) 
In the above sentence "a" is a variable in which all data is stored 
"&" -> works as an adress of the operators 
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int a , b , c , d ;

    printf(" Enter the big number =  " ) ;
    scanf("%d" , &a ) ;

    printf(" Enter the small number =  ") ;
    scanf("%d" , &b ) ;

    c = a + b ;
    printf( " The sum of two given no's are -> %d \n " , c ) ;

    d = b - a ;
    printf(" The difference between two no's are -> %d \n " , d ) ;

    getch() ;
            
    return 0;
}
