/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int edad;
    printf("Dame tu edad: ");
    scanf("%i",&edad);
    
    if (edad<=3)
    {
        printf("Eres un bebe");
    }
    else if (edad<=12)
    {
        printf("Eres un niño");
    }
    else if (edad>12)
    printf("Ya estas grande capitan");
    return 0;
}