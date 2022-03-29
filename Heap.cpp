#include "Heap.h"
#include <stdexcept>

Heap::Heap(int capacity) : Tree{ capacity }{}

Heap::Heap(int* tab, int capacity, int size) : Tree{tab, capacity, size}
{
	heapify();
}

void Heap::heapify()
{
	for (int i = (m_size / 2); i > 0; i--)
	{
		int idxParent{ i - 1 };
		int parent{ m_data[i - 1] };
		bool heap{ false };
		while (!heap && right(idxParent) <= m_size)
		{
			int idxEnfant{ left(idxParent) };
			if (idxEnfant < m_size - 1)
			{
				if (m_data[idxEnfant] < m_data[idxEnfant + 1])
				{
					idxEnfant++;
				}
			}
			if (parent >= m_data[idxEnfant])
			{
				heap = true;
			}
			else
			{
				m_data[idxParent] = m_data[idxEnfant];
				idxParent = idxEnfant;
			}
		}
		m_data[idxParent] = parent;
	}
}
