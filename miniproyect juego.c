/******************************************************************************
 *11/sep/24
 * Walter Silva y Ahymee Carimee 
 * Este es un juego en el que tienes que escribir la primera letra de la figura que aparezca 
 * si la tienes correcta te da 5 puntos y si no te quita 5 y ganas al llegar a 15 puntos
 * 
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void gato();
void perro();
void hacha ();
int main()
{ 
    char letra, res;
    int figura,puntos=0;
    srand(time(NULL));
    
    do{
    figura=rand()%3;
    switch(figura)
    {
        case 0:gato();
            letra='g';
            break;
        case 1:perro();
            letra='p';
            break;
        case 2:hacha();
            letra='h';
            
    }
    printf("cual es la primer letra de la figura: ");
    scanf("%c",&res);
    getchar();
     if(res==letra)
     {
     puntos= puntos+5;
     printf("llevas %i puntos\n",puntos);
     }
     else
     {
        puntos-=5;
        printf("Te equivocaste (-5)");
        printf("tus puntos: %i\n",puntos);
     }
    }while (puntos<15);
    printf("Ganaste capitan");
    return 0;
}

void gato()
{
   printf("  /\\_/\\\n");
   printf(" ( o.o )\n");
   printf("  > ^ <\n");
   
}
void perro()
{
    printf("    (\\,--------'()'--o\n");
 printf("    (_    ___    /~\"\n");
 printf("      (_)_)  (_)_)\n"); 
}
void hacha()
{

    printf("         /!\n");
    printf("        / ! \n");
    printf(" /\\     )___\n");
    printf("(  `.____(_)_________\n");
    printf("|           __..--\"\"\n");
    printf("(       _.-|\n");
    printf(" \\    ,' | |\n");
    printf("  \\  /   | |\n");
    printf("   \\(    | |\n");
    printf("     `    | |\n");
    printf("          | | \n");
}
