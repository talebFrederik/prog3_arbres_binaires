/* Arbre
*  La classe est utilis�e pour traiter un tableau comme s'il s'agissait d'une structure
*  de donn�es en forme d'arbre. On peut �galement constuire un arbre � partir d'un tableau vide
*  en ins�rant des donn�es. 
*  L'insertion est na�ve donc on ne compare pas avec le parent et on ins�re simplement 
*  en commen�ant par la gauche.
*/

#pragma once

#include <vector>

class Tree
{
private:
	int* m_data;
	int m_size;
	int m_capacity;

	/*
	* Trouve l'index de l'enfant gauche � partir de l'index du parent
	* 
	* @param index l'index du parent
	* @return l'index de l'enfant gauche
	*/
	int left(int);
	/*
	* Trouve l'index de l'enfant droit � partir de l'index du parent
	* 
	* @param index l'index du parent
	* @return l'index de l'enfant droit
	*/
	int right(int);
	/*
	* Trouve l'index du parent � partir de l'index d'un enfant
	* 
	* @param index l'index de l'enfant
	* @return l'index du parent
	*/
	int parent(int);
public:
	/*
	* Construit un arbre vide avec une capacit� maximum de cl�s
	* Le tableau est initialis� dans le constructeur et le nombre d'�l�ments est z�ro
	* 
	* @param capcity le nombre maximum d'�l�ments dans l'arbre
	*/
	Tree(int);
	/*
	* Construit un arbre � partir d'un tableau
	* 
	* @param tab le tableau original
	* @param capacity le nombre maximum de noeuds dans l'arbre
	* @param size le nombre d'�l�ments dans le tableau pass� en param�tre
	*/
	Tree(int*, int, int);
	/*
	* Nettoyage du tableau
	*/
	~Tree();
	/*
	* Ajoute une cl� en suivant la propri�t� d'arbre complet
	* 
	* @param key la cl� � ins�rer
	*/
	void insert(int);
	/*
	* Parcours en largeur
	*/
	void bfs();
	/*
	* Parcours en profondeur
	*/
	void dfs();

};

