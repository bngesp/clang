#include <stdio.h>
#include <math.h>
int main()
{
    int l,L,hypo;
    printf("donnez les coordonnees d'un rectangle");
    scanf("%d%d",&L,&l);
    hypo=sqrt(l*l+L*L);
    printf("l'hypothenus%d est ",hypo);
    return 0;
}