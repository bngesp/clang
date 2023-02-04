#include <stdio.h>

int main(){
    int x, y, z;
    printf("Donnez la valeur de x");
    scanf("%d", &x);
    
    printf("Donnez la valeur de y");
    scanf("%d", &y);
    
    printf("Donnez la valeur de Z");
    scanf("%d", &z);

    x = x + y + z;
    y = x - y - z;
    z = x - y - z;
    x = x - y - z;

    printf("les valeurs sont:\n x=%d \ny=%d \nz=%d", x, y, z);

    return 0;
}