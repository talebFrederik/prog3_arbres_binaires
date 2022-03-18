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

	int left(int);
	int right(int);
	int parent(int);
public:
	Tree();
	~Tree();


};

