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
	/*
	* Insertion dd'un �l�ment tout en gardant les propri�t�s d'un heap max	
	* 
	* @param key la nouvelle cl� � ins�rer dans le heap
	*/
	void insert(int);
	/*
	* Retrait de la racine du heap (�l�ment max)
	*/
	void pop();
	/*
	* V�rifie que le tableau est organis� sous forme de heap max
	* 
	* @return VRAI si c'est un heap max, FAUX sinon
	*/
	bool isHeap();
	/*
	* Affiche les �l�ments du tableau en ordre d�croissant en 
	* utilisant le heap. Algorithme du nom de heapsort
	*/
	void heapsort();
	/*
	* Trouve et retire l'�l�ment le plus petit du heap
	*/
	void popMin();
	/*
	* Trouve et retire un �l�ment s'il existe
	* 
	* @param key l'�l�ment � retirer
	*/
	void popValue(int);
private:
	/*
	* Organise le tableau en heap max
	*/
	void heapify();
};

