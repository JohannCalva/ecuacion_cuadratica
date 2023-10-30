#include <stdio.h>
#include <math.h>

float calculoDiscriminante(float p, float q, float r){
    float resultado;
    resultado = pow(q,2) - (4*p*r);
    return resultado;
}

float calculoResultado1(float p, float q, float r, float disc){
    float r1;
    r1 = (-q + sqrt(disc))/(2*p);
    return r1;
}

float calculoResultado2(float p, float q, float r, float disc){
    float r2;
    r2 = (-q - sqrt(disc))/(2*p);
    return r2;
}

int main(void){

    float a, b, c, discriminante, resultado1, resultado2;

    printf("____Bienvenido a la calculadora de ecuaciones de segundo grado____\n");
    printf("Escriba los valores de la ecuacion de la forma ax^2 + bx + c\n");
    printf("Nota: Escriba los decimales con punto.\n");

    do{
        printf("\nValor de a: ");
        scanf("%f", &a);
        if(a==0){
            printf("Para ser una ecuacion cuadratica, el valor de a debe ser diferente de 0.\n");
            printf("Ingrese nuevamente.\n");
        }
    }while(a==0);

    printf("Valor de b: ");
    scanf("%f", &b);
    printf("Valor de c: ");
    scanf("%f", &c);

    discriminante = calculoDiscriminante(a,b,c);
    printf("\nEl discriminante es: %.2f\n", discriminante);

    if(discriminante < 0){
        printf("\nEl sistema no tiene solucion.");

    }else if(discriminante > 0){
        printf("\nEl sistema tiene 2 soluciones.\n");

        resultado1 = calculoResultado1(a,b,c,discriminante);
        resultado2 = calculoResultado2(a,b,c,discriminante);

        printf("\nPrimer resultado\t x1: %.2f\n", resultado1);
        printf("Segundo resultado\t x2: %.2f\n", resultado2);
    }else{
        printf("\nEl sistema tiene una unica solucion\n");

        resultado1 = calculoResultado1(a,b,c,discriminante);
        resultado2 = calculoResultado2(a,b,c,discriminante);

        printf("\nPrimer resultado\t x1: %.2f\n", resultado1);
        printf("Segundo resultado\t x2: %.2f\n", resultado2);
    }
    return 0;
}