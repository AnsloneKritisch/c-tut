//WAP to find out how my space is taken by a integer , float and string .

#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 1 ;
    float b = 1.0 ;
    char c = 'A' ;

    printf(" The space occupied by integer = %d \n ", sizeof(a)) ;
    printf(" The space occupied by string = %s \n ", sizeof(c)) ;
    printf(" The space occupied by float = %f \n", sizeof(b)) ;
    

    getch() ; 
    

    return 0;
}

