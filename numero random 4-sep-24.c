/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, nummagic;
    srand(time(NULL));
    nummagic = rand() % 100;

    printf("Dame un numero: ");
    scanf("%i", &num);

    while (num != nummagic) {
        if (num < nummagic) {
            printf("El numero es más alto que eso\n");
        } else if (num > nummagic) {
            printf("El numero es más bajo que eso\n");
        }

        printf("\nDame un numero: ");
        scanf("%i", &num);
    }

    printf("Ganaste capitan, tu numero era %i\n", nummagic);

    return 0;
}
