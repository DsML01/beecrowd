#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Peneira de Eratóstenes
int is_prime(int item) {
    if (item <= 1) return 0; // Números menores ou iguais a 1 não são primos
    if (item <= 3) return 1; // 2 e 3 são primos

    // Verificar divisibilidade por todos os números ímpares até a raiz quadrada do item
    for (int i = 2; i <= sqrt(item); i++) {
        if (item % i == 0) {
            return 0; // Encontrou um divisor, não é primo
        }
    }
    return 1; // Não encontrou divisores, é primo
}

void multiplos(int n1, int n2)
{
    int mult[7] = {2, 3, 5, 7, 13, 17, 23};
    int whichone = 5;
    for(int i = 0; i < 7; i++)
    {
        if(n1 % mult[i] == 0 && n2 % mult[i] == 0) whichone = i;
    }
    
    if(whichone != 5)
    {
        multiplos(n1/mult[whichone], n2/mult[whichone]);
        return;
    }
    printf("%d/%d\n", n1, n2);
    return;
}

void soma(int n1, int n2, int d1, int d2)
{
    int numerador = ((n1 * d2) + (n2 * d1));
    int denominador = (d1 * d2);

    printf("%d/%d = ", numerador, denominador);

    /*if(numerador == denominador && is_prime(numerador) == 1)
    {
        printf("1/1\n");
        return;
    }*/

    multiplos(numerador, denominador);
    return;
}

void subtracao(int n1, int n2, int d1, int d2)
{
    int numerador = ((n1 * d2) - (n2 * d1));
    int denominador = (d1 * d2);

    printf("%d/%d = ", numerador, denominador);

    /*if(numerador == denominador && is_prime(numerador) == 1)
    {
        printf("1/1\n");
        return;
    }*/

    multiplos(numerador, denominador);
    return;
}

void divisao(int n1, int n2, int d1, int d2)
{
    int numerador = (n1 * d2);
    int denominador = (n2 * d1);

    printf("%d/%d = ", numerador, denominador);

    /*if(numerador == denominador && is_prime(numerador) == 1)
    {
        printf("1/1\n");
        return;
    }*/

    multiplos(numerador, denominador);
    return;
}

void multiplicacao(int n1, int n2, int d1, int d2)
{
    int numerador = (n1 * n2);
    int denominador = (d1 * d2);

    printf("%d/%d = ", numerador, denominador);

    /*if(numerador == denominador && is_prime(numerador) == 1)
    {
        printf("1/1\n");
        return;
    }*/

    multiplos(numerador, denominador);
    return;
}

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        char entrada[100];

        //fgets(entrada, 100, stdin);
        int n1, n2, d1, d2;
        char signal, divisao1, divisao2;
        int k = 0;

        scanf("%d %c %d %c %d %c %d", &n1, &divisao1, &d1, &signal, &n2, &divisao2, &d2);

        //printf("%d %c %d %c %d %c %d\n",n1, divisao1, d1, signal, n2, divisao2, d2);

        switch(signal)
        {
            case '+':
                soma(n1, n2, d1, d2);
                break;
            case '-':
                subtracao(n1, n2, d1, d2);
                break;
            case '/':
                divisao(n1, n2, d1, d2);
                break;
            case '*':
                multiplicacao(n1, n2, d1, d2);
                break;
        }
    }
    return 0;
}