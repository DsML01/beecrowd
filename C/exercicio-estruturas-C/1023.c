#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cidade = 1, maior = 0;
    while(scanf("%d", &n) == 1 && n != 0)
    {
        if(cidade != 1) puts("");

        int *consumo_m3 = calloc(201, sizeof(int));

        int habitantes, consumo,mean_habitantes = 0, mean_consumo = 0, cont = 0;

        for(int i = 0; i < n; i++)
        {
            scanf("%d %d", &habitantes, &consumo);

            int newi = consumo/habitantes;
            if(consumo_m3[newi] == 0) cont++;

            consumo_m3[newi] += habitantes;

            mean_habitantes += habitantes;

            mean_consumo += consumo;
        }
        printf("Cidade# %d:\n", cidade++);

        for(int i = 0; i <= 200; i++)
        {
            if(consumo_m3[i])
            {
                printf("%d-%d", consumo_m3[i], i);
                cont--;
                if(cont) printf(" ");
                else break;
            }
        } 
        puts("");
        double media = (double)mean_consumo / mean_habitantes;
        printf("Consumo medio: %.2lf m3.\n", floorf(media * 100)/100);
        free(consumo_m3);
    }
    return 0;
}