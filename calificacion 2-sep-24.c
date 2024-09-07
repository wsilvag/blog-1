/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    float calification; // Declarar la variable

    printf("Dame tu nota final: ");
    scanf("%f", &calification);

    if (calification >= 6)
    {
        printf("APROBASTE CAPITAN\n");
    }
    else
    {
        printf("NO APROBASTE CAPI\n");
    }

    return 0;
}
