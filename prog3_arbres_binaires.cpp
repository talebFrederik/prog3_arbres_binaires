#include "Heap.h"

#include <iostream>


int main()
{
    int size = 7;
    int capacite = 20;
    int* tab = new int[size];
    int tab2[7]{2,9,7,6,5,8,10};
    for (int i = 0; i < size; i++)
    {
        tab[i] = i+1;
    }

    Heap tree{ tab2, capacite , size };
    tree.bfs();
  
}
