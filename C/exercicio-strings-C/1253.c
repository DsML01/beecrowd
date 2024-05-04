//I've done this problem using linked list, it may be not what you search for, but u can give it a try :)
//Eu fiz esse problema utilizando lista encadeada, pode não ser o que você pesquisa, mas dê uma chance :)
//J'en ai fait cette problème en utilisant linked list, ça peut être pas ce que tu cherchais, mais donne une chance :)

#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int item;
    struct _node *next;
} node;

node *create_linked_list()
{
    return NULL;
}

void printlinkedlist(node *head, int jumps)
{
    node *aux = head;

    if(aux == NULL)
    {
        printf("VAZIO\n");
        return;
    }

    while(aux != NULL)
    {
        int cifrado = aux->item - jumps;
        if(cifrado < 65)
        {
            cifrado = 91 - (65 - cifrado);
            printf("%c", (cifrado));
        }
        else
        {
            printf("%c", (cifrado));
        }
        aux = aux->next;
    }
    puts("");
    return;
}

node *addnodefinal(node *head, int item)
{
    node *new_node = (node*) calloc(1, sizeof(node));

    new_node->item = item;
    new_node->next = NULL;

    if(head == NULL)
    {
        return new_node;
    }
    else
    {
        node *aux = head;

        while(aux->next)
        {
            aux = aux->next;
        }

        aux->next = new_node;

        return head;
    }
}

void questao(int n)
{

    for(int i = 1; i <= n; i++)
    {
        //printf("TO NO I = %d\n", i);
        char item;

        //if (i == 1) scanf("%c", &item);
        scanf("%c", &item);

        node *linked_list = create_linked_list();

        while(scanf("%c", &item) == 1 && item != '\n')
        {
            //printf("%c", item);
            linked_list = addnodefinal(linked_list, item);
        }
        //printf(item == '\n' ? "\nSIM\n" : "\nNÃO\n" ); 
        //puts("");

        int pulos;
        scanf("%d", &pulos);

        printlinkedlist(linked_list, pulos);
    }

    return;
}

int main()
{
    int vezes_a_repetir;

    char lixo;

    scanf("%d", &vezes_a_repetir);

    questao(vezes_a_repetir);

    return 0;
}