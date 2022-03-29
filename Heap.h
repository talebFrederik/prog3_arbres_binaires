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
private:
	/*
	* Organise le tableau en heap max
	*/
	void heapify();
};

