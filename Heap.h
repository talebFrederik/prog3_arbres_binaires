#pragma once

#include "Tree.h"
class Heap :
    public Tree
{
public:
	/*
	* Construit un heap mx vide avec une capacit� maximum de cl�s
	* Le tableau est initialis� dans le constructeur et le nombre d'�l�ments est z�ro
	*
	* @param capcity le nombre maximum d'�l�ments dans le heap
	*/
	Heap(int);
	/*
	* Construit un heap max � partir d'un tableau
	*
	* @param tab le tableau original
	* @param capacity le nombre maximum de noeuds dans le heap
	* @param size le nombre d'�l�ments dans le tableau pass� en param�tre
	*/
	Heap(int*, int, int);
private:
	/*
	* Organise le tableau en heap max
	*/
	void heapify();
};

