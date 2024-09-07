/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define EURO 21.34

int main() {
    float Pesos_Euros;
    float Euros;

    printf("Ingrese la cantidad de pesos que quiere convertir a Euros: ");
    scanf("%f", &Pesos_Euros);

    Euros = Pesos_Euros / EURO;  

    printf("La cantidad en Euros es: %f\n", Euros);

    return 0;
}