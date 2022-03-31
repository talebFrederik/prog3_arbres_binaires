#include "Heap.h"
#include <iostream>

Heap::Heap(int capacity) : Tree{ capacity }{}

Heap::Heap(int* tab, int capacity, int size) : Tree{tab, capacity, size}
{
	heapify();
}

void Heap::insert(int key)
{
	if (m_size == 0)
	{
		m_data[m_size] = key;
	}
	else
	{
		int index = m_size;
		m_data[index] = key;
		while (parent(index) >= 0 && m_data[index] > m_data[parent(index)])
		{
			m_data[index] = m_data[parent(index)];
			index = parent(index);
			m_data[index] = key;
		}
	}
	m_size++;
}

void Heap::pop()
{
	m_data[0] = m_data[m_size - 1];
	m_data[m_size - 1] = INT_MIN;
	m_size--;
	heapify();
}

bool Heap::isHeap()
{
	bool heap = true;
	int index = m_size / 2;
	while (heap && index >= 0)
	{
		if (m_data[index] < m_data[left(index)] || m_data[index] < m_data[right(index)])
		{
			heap = false;
		}
		index--;
	}
	return heap;
}

void Heap::heapsort()
{
	while (m_size > 0)
	{
		std::cout << m_data[0];
		pop();
	}
}

void Heap::popMin()
{
	if (m_size < 2)
	{
		pop();
	}
	else
	{
		int indexMin{ m_size / 2 };
		for (int i = m_size / 2 + 1; i < m_size; i++)
		{
			if (m_data[i] < m_data[indexMin])
			{
				indexMin = i;
			}
		}
		m_data[indexMin] = m_data[m_size - 1];
		m_data[m_size - 1] = INT_MIN;
		m_size--;

		int min{ m_data[indexMin] };
		while (parent(indexMin) >= 0 && m_data[indexMin] > m_data[parent(indexMin)])
		{
			m_data[indexMin] = m_data[parent(indexMin)];
			indexMin = parent(indexMin);
			m_data[indexMin] = min;
		}
	}
}

void Heap::popValue(int key)
{
	bool exist{ false };
	int index{ 0 };
	while (!exist && index < m_size)
	{
		if (m_data[index] == key)
		{
			exist = true;
		}
		else
		{
			index++;
		}
	}
	if (exist)
	{
		m_data[index] = m_data[m_size - 1];
		m_data[m_size - 1] = INT_MIN;
		m_size--;

		heapify();
	}
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
