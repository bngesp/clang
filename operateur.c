#include <stdio.h>

int main(){

    // declaration des variables
    // int a;
    // int b;
    int a, b;
    float c, d;
    a = 15;
    b = 16;
    c = 0.5;
    d = 125.75;

    printf(" la valeur de a est : %d, %d", a, b);
    printf(" la valeur de b est : %d", b);
    printf("la valeur de c est : %lf ", c);
    printf("la valeur de d est : %lf ", d);
    
    int x;
    x = a - b;
    printf("la valeur de x est : %d ", x);

    float y;

    y = c*d;
    printf("la valeur de y est : %lf ", y);

    char un_caractere, car;
    un_caractere = 'A';
    car = 'a';
    printf("le caractere est : %c ", un_caractere);
    printf("le caractere est: %c ", car);

    int var = 65;
    printf("la valeur de var : %d", var);
    printf("la valeur de var : %c", var);

    char aval = 'a';
    printf("la valeur de aval : %d", aval);
    printf("la valeur de aval : %c", aval);


    return 0;
}