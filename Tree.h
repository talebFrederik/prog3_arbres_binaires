/* Arbre
*  La classe est utilisée pour traiter un tableau comme s'il s'agissait d'une structure
*  de données en forme d'arbre. On peut également constuire un arbre à partir d'un tableau vide
*  en insérant des données. 
*  L'insertion est naïve donc on ne compare pas avec le parent et on insère simplement 
*  en commençant par la gauche.
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
	* Trouve l'index de l'enfant gauche à partir de l'index du parent
	* 
	* @param index l'index du parent
	* @return l'index de l'enfant gauche
	*/
	int left(int);
	/*
	* Trouve l'index de l'enfant droit à partir de l'index du parent
	* 
	* @param index l'index du parent
	* @return l'index de l'enfant droit
	*/
	int right(int);
	/*
	* Trouve l'index du parent à partir de l'index d'un enfant
	* 
	* @param index l'index de l'enfant
	* @return l'index du parent
	*/
	int parent(int);
public:
	/*
	* Construit un arbre vide avec une capacité maximum de clés
	* Le tableau est initialisé dans le constructeur et le nombre d'éléments est zéro
	* 
	* @param capcity le nombre maximum d'éléments dans l'arbre
	*/
	Tree(int);
	/*
	* Construit un arbre à partir d'un tableau
	* 
	* @param tab le tableau original
	* @param capacity le nombre maximum de noeuds dans l'arbre
	* @param size le nombre d'éléments dans le tableau passé en paramètre
	*/
	Tree(int*, int, int);
	/*
	* Nettoyage du tableau
	*/
	~Tree();
	/*
	* Ajoute une clé en suivant la propriété d'arbre complet
	* 
	* @param key la clé à insérer
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

