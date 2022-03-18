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

	int left(int);
	int right(int);
	int parent(int);
public:
	Tree();
	~Tree();


};

