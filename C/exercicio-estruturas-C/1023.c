#include <stdio.h>
#include <math.h>

typedef struct _consumo
{
    int habitantes;
    double consumo;
    double mean;
} consumo;

int main()
{
    int n, cidade = 1;
    while(scanf("%d", &n) == 1 && n != 0)
    {
        //x = numero de habitantes | 1 <= x <= 10;
        //y = consumo de agua em m^3 | 1 <= x <= 200;

        consumo *casa = calloc(n, sizeof(consumo));

        double mean_habitantes = 0, mean_consumo = 0;

        for(int i = 0; i < n; i++)
        {
            if(i != 0) puts("");

            scanf("%d %lf", casa[i]->habitantes, casa[i]->consumo);

            casa->mean = floor(casa->habitantes/casa->consumo);

            mean_habitantes += casa->habitantes;
        }

        printf("Cidade# %d:\n", cidade);
        cidade++;

    }

    return 0;
}