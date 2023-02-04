#include <stdio.h>

int main(){
    int nombre;
    printf(" veuillez saisir une nombre");
    scanf("%d", &nombre);
    if(nombre % 3 == 0)
    {
         printf("le nombre est divisible par 3");
    }
    else
    {
        printf("le nombre n'est pas divisible par 3");
    }
        
    return 0;
}