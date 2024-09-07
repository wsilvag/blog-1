/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num1, num2;
    float x;
    printf("Dame un numero: ");
    scanf("%i",&num1);
    printf("Dame otro numero: ");
    scanf("%i",&num2);
    
    if(num1!=0)
    {
        x=-num1/(float)num2;
        printf("El resultado es %f ",x);
        
    }
    else
    {
        printf("La ecuacion no es realizable");
    }
    return 0;
}
