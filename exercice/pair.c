#include <stdio.h>

int main(){
    int nombre;
    printf(" veuillez saisir une nombre");
    scanf("%d", &nombre);
    if(nombre % 2 == 0)
    {
         printf("le nombre est pair");
    }
    else
    {
        printf("le nombre est impair");
    }
        
    return 0;
}