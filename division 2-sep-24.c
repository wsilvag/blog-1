/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int base, expo;
    float resultado;

    printf("Dame la base: ");
    scanf("%i", &base);

    printf("Dame el exponente: ");
    scanf("%i", &expo);

    resultado = (float)base / expo;

    printf("El resultado de %i/%i es: %f\n", base, expo, resultado);

    return 0;
}
