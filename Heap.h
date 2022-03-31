#pragma once

#include "Tree.h"
class Heap :
    public Tree
{
public:
	/*
	* Construit un heap mx vide avec une capacité maximum de clés
	* Le tableau est initialisé dans le constructeur et le nombre d'éléments est zéro
	*
	* @param capcity le nombre maximum d'éléments dans le heap
	*/
	Heap(int);
	/*
	* Construit un heap max à partir d'un tableau
	*
	* @param tab le tableau original
	* @param capacity le nombre maximum de noeuds dans le heap
	* @param size le nombre d'éléments dans le tableau passé en paramètre
	*/
	Heap(int*, int, int);
	/*
	* Insertion dd'un élément tout en gardant les propriétés d'un heap max	
	* 
	* @param key la nouvelle clé à insérer dans le heap
	*/
	void insert(int);
	/*
	* Retrait de la racine du heap (élément max)
	*/
	void pop();
	/*
	* Vérifie que le tableau est organisé sous forme de heap max
	* 
	* @return VRAI si c'est un heap max, FAUX sinon
	*/
	bool isHeap();
	/*
	* Affiche les éléments du tableau en ordre décroissant en 
	* utilisant le heap. Algorithme du nom de heapsort
	*/
	void heapsort();
	/*
	* Trouve et retire l'élément le plus petit du heap
	*/
	void popMin();
	/*
	* Trouve et retire un élément s'il existe
	* 
	* @param key l'élément à retirer
	*/
	void popValue(int);
private:
	/*
	* Organise le tableau en heap max
	*/
	void heapify();
};

