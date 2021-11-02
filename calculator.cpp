#include <stdio.h>
#include <string.h>

int main()
{
    char a[0], b[0];
    float x, y, resultado;

    do
    {
        printf("Calculadora básica\n");
        printf("Multiplicar\n");
        printf("Sumar\n");
        printf("Restar\n");
        printf("Dividir\n");
        scanf("%s", a);

        if (strcmp(a, "sumar") == 0)
        {
            printf("Numeros a sumar\n");
            printf("Primer numero\n");
            scanf("%f", &x);
            printf("Segundo numero\n");
            scanf("%f", &y);

            resultado = (x + y);
            printf("El resultado es:%f\n", resultado);
        }
        else if (strcmp(a, "restar") == 0)
        {
            printf("Numeros a restar\n");
            printf("Primer numero\n");
            scanf("%f", &x);
            printf("Segundo numero\n");
            scanf("%f", &y);

            resultado = (x - y);
            printf("El resultado es:%f\n", resultado);
        }
        else if (strcmp(a, "multiplicar") == 0)
        {
            printf("Numeros a multiplicar\n");
            printf("Primer numero\n");
            scanf("%f", &x);
            printf("Segundo numero\n");
            scanf("%f", &y);

            resultado = (x * y);
            printf("El resultado es:%f\n", resultado);
        }
        else if (strcmp(a, "dividir") == 0)
        {
            printf("Numeros a dividir\n");
            printf("Primer numero\n");
            scanf("%f", &x);
            printf("Segundo numero\n");
            scanf("%f", &y);

            resultado = (x / y);
            printf("El resultado es:%f\n", resultado);
        }

        printf("Escribe 'inicio' para repetir\n");
        scanf("%s", b);
    } while (strcmp(b, "inicio") == 0);
    return 0;
}