#include <stdio.h>

int main(){
    int w, x, y, z;
    printf("veuillez saisir le nombre w : ");
    scanf("%d", &w);
    printf("veuillez saisir le nombre X : ");
    scanf("%d", &x);
    printf("veuillez saisir le nombre Y : ");
    scanf("%d", &y);
    printf("veuillez saisir le nombre z : ");
    scanf("%d", &z);
    int som = w + x + y + z;
    int prod = w * x * y * z;
    float moyenne = som / 4;
    float moyCarre = (w*w + x*x + y*y + z*z ) / 4;

    printf("le resultat : \n1) la somme  = %d \n2) le produit = %d \n la moyenne = %f\n la moyenne carre = %f", som, prod, moyenne, moyCarre);

    return 0;
}