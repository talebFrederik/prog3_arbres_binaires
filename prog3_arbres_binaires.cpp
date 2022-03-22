#include "Tree.h"

#include <iostream>


int main()
{
    int size = 7;
    int capacite = 20;
    int* tab = new int[size];
    for (int i = 0; i < size; i++)
    {
        tab[i] = i+1;
    }
    Tree tree{ tab, capacite , size };
    tree.dfs();
}
