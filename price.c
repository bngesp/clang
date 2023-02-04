#include <stdio.h>

int main(){
    float prix_ht,prix_ttc,tva;
    tva = 0.18;
    printf("veuillez saisir le prix HT");
    scanf("%f", &prix_ht);
    prix_ttc = prix_ht*(tva + 1);
    printf("le prix ttc est : %lf", prix_ttc);
    return 0;
}