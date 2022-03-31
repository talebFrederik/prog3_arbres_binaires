#include "Heap.h"

#include <iostream>


int main()
{
    int size = 6;
    int capacite = 20;
    int* tab = new int[size];
    int tab2[7]{2,9,7,6,5,8};
    for (int i = 0; i < size; i++)
    {
        tab[i] = i+1;
    }

    Heap heap{ tab2, capacite , size };
    heap.insert(10);
    heap.pop();
    heap.bfs();
    std::cout << "\n";
    heap.popValue(5);
    std::cout << "\n";
    heap.bfs();
}
