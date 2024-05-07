#include <stdio.h>
#include <stdlib.h>

typedef struct _bt
{
    int item;
    int h;
    struct _bt *left;
    struct _bt *right;
} btree;

void print_btree_order(btree *root)
{
    if (!root) return;

    print_btree_order(root->left);

    printf("%d\n", root->item);

    print_btree_order(root->right);

    return;
}

void print_btree_inverse_order(btree *root)
{
    if (!root) return;

    print_btree_inverse_order(root->right);

    printf("%d\n", root->item);

    print_btree_inverse_order(root->left);

    return;
}

/*btree *create_empty_btree()
{
    return NULL;
}*/

int btreeh(btree *root)
{
    return root ? root->h : -1;
}

int maior(int ha, int hb)
{
    return (ha > hb) ? ha : hb;
}

btree *create_new_node(int item)
{
    btree *new_btree = (btree *) calloc(1, sizeof(btree));

    new_btree->item = item;
    new_btree->left = NULL;
    new_btree->right = NULL;
    new_btree->h = 0;  

    return new_btree;
}

int balancefactor(btree *root)
{
    return root ? (btreeh(root->left) - btreeh(root->right)) : 0 ;
}

btree *leftRotation(btree *root)
{
    btree *son = root->right;
    btree *grandson = son->left;

    son->left = root;

    root->right = grandson;

    root->h = maior(btreeh(root->left), btreeh(root->right)) + 1;
    son->h = maior(btreeh(son->left), btreeh(son->right)) + 1;

    return son;
}

btree *rightRotation(btree *root)
{
    btree *son = root->left;
    btree *grandson = son->right;

    son->right = root;
    root->left = grandson;

    root->h = maior(btreeh(root->left), btreeh(root->right)) + 1;
    son->h = maior(btreeh(son->left), btreeh(son->right)) + 1;

    return son;
}

btree *RightLeftRotation(btree *root)
{
    root->right = rightRotation(root->right);

    return leftRotation(root);
}

btree *LeftRightRotation(btree *root)
{
    root->left = leftRotation(root->left);

    return rightRotation(root);
}

btree *balancetree(btree *root)
{
    int balance_factor = balancefactor(root);

    if(balance_factor < -1 && balancefactor(root->right) <= 0) root = leftRotation(root);

    else if(balance_factor > 1 && balancefactor(root->left) >= 0) root = rightRotation(root);

    else if(balance_factor > 1 && balancefactor(root->left) < 0) root = LeftRightRotation(root);

    else if(balance_factor < -1 && balancefactor(root->right) > 0) root = RightLeftRotation(root);

    return root;
}

btree *insertion_equal(btree *root, int item)
{
    if (!root)
    {
        // Se o nó for nulo, cria um novo nó com o item
        return create_new_node(item);
    }
    else
    {
        
    }

    // Se o item for menor que o item do nó atual, insere à esquerda
    if (item < root->item)
    {
        root->left = insertion_equal(root->left, item);
    }
    // Se o item for maior que o item do nó atual, insere à direita
    else if (item > root->item)
    {
        root->right = insertion_equal(root->right, item);
    }
    // Se o item for igual ao item do nó atual, insere no nó à direita
    else
    {
        root->right = insertion_equal(root->right, item);
    }

    root->h = maior(btreeh(root->left), btreeh(root->right)) + 1;

    root = balancetree(root);

    return root;
}

btree *insertion(btree *root, int item)
{
    if(!root) return create_new_node(item);

    else
    {
        if(item < root->item) root->left = insertion(root->left, item);

        else if(item > root->item) root->right = insertion(root->right, item);

        //else puts("Insercao nao realizada, pois o elemento já existe!");
        else
        {
            root->right = insertion_equal(root->right, item);
        }
    }

    root->h = maior(btreeh(root->left), btreeh(root->right)) + 1;

    root = balancetree(root);

    return root;
}

int main()
{
    int num_leituras;
    scanf("%d", &num_leituras);

    //btree *pair = create_empty_btree;
    //btree *odd = create_empty_btree;

    btree *pair = NULL;
    btree *odd = NULL;

    for(int i = 1; i <= num_leituras; i++)
    {
        int item;
        scanf("%d", &item);

        if (item % 2 == 0) pair = insertion(pair, item);
        
        else odd = insertion(odd, item);
    }

    print_btree_order(pair);
    //print_btree_order(odd);
    print_btree_inverse_order(odd);

    return 0;
}