#include <stdio.h>
#include <stdlib.h>

int particiona(int *v, int inicio, int fim)
{
    //nesse caso o professor escolheu como pivot um numero que seja a media entre o primeiro valor, o valor do meio e o do final
    int pivot = (v[inicio] + v[(inicio + fim) / 2] + v[fim])/3;

    while (inicio < fim)
    {
        while(inicio < fim && v[inicio] <= pivot) inicio = inicio + 1;
        while(inicio < fim && v[fim] > pivot) fim = fim - 1;
        
        int aux = v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;
    }
    return inicio;
}

void quicksort(int *v, int inicio, int fim)
{
    if(inicio < fim)
    {
        int posicao = particiona(v, inicio, fim);
        quicksort(v, inicio, posicao - 1);
        quicksort(v, posicao, fim);
    }
    return;
}

void binarysearch(int *v, int start, int end, int key)
{
    int mid = start + (end - start) / 2;

    if(start <= end)
    {
        if(v[mid] == key)
        {
            while(mid > 0)
            {
                if(v[mid - 1] == v[mid]) mid--;
                else break;
            }
            printf("%d found at %d\n", key, ++mid);
        }

        else if(key > v[mid]) binarysearch(v, mid + 1, end, key);

        else binarysearch(v, start, mid - 1, key);
    }
    else
    {
        if(v[mid] == key)
        {
            while(mid > 0)
            {
                if(v[mid - 1] == v[mid]) mid--;
                else break;
            }
           printf("%d found at %d\n", key, ++mid); 
        }
       else printf("%d not found\n", key);
    }
    return;
}

int main()
{
    int num_marmores, num_consultas, consulta, cont = 1;

    while(scanf("%d %d", &num_marmores, &num_consultas) == 2 && num_marmores != 0 && num_consultas != 0)
    {
        printf("CASE# %d:\n", cont++);

        int *v = calloc(num_marmores, sizeof(int));

        for(int i = 0; i < num_marmores; i++)
        {
            scanf("%d", &v[i]);
        }
        quicksort(v, 0, num_marmores - 1);

        for(int i = 1; i <= num_consultas; i++)
        {
            scanf("%d", &consulta);
            binarysearch(v, 0, num_marmores - 1, consulta);
        }
        free(v);
    }

    return 0;
}