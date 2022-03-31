#include "Tree.h"
#include <iostream>
#include <stack>
#include <deque>

int Tree::left(int index)
{
	return 2 * index + 1;
}

int Tree::right(int index)
{
	return 2 * index + 2;
}

int Tree::parent(int index)
{
	return (index - 1) / 2 ;
}

Tree::Tree(int capacity) : m_capacity{ capacity }, m_size{ 0 }
{
	m_data = new int[capacity];
	for (int i = 0; i < m_capacity; i++)
	{
		m_data[i] = INT_MIN;
	}
}

Tree::Tree(int* tab, int capacity, int size) : m_capacity{ capacity }, m_size{ size }
{
	m_data = new int[capacity];
	for (int i = 0; i < size; i++)
	{
		m_data[i] = tab[i];
	}
	for (int i = size; i < m_capacity; i++)
	{
		m_data[i] = INT_MIN;
	}
}

Tree::~Tree()
{
	delete[] m_data;
}

void Tree::insert(int key)
{
	m_data[m_size] = key;
	m_size++;
}

void Tree::bfs()
{
	std::deque<int> queue{};
	queue.push_back(0);
	while (!queue.empty())
	{
		if (left(queue.front()) < m_capacity && m_data[left(queue.front())] >= 0)
		{
			queue.push_back(left(queue.front()));
		}
		if (right(queue.front()) < m_capacity && m_data[right(queue.front())] >= 0)
		{
			queue.push_back(right(queue.front()));
		}

		std::cout << m_data[queue.front()] << " ";
		queue.pop_front();
	}
}

void Tree::dfs()
{
	std::stack<int> stack{};
	stack.push(0);
	while (!stack.empty())
	{
		int nodeIndex = stack.top();
		std::cout << m_data[nodeIndex] << " ";
		stack.pop();
		if (right(nodeIndex) < m_capacity && m_data[right(nodeIndex)] >= 0)
		{
			stack.push(right(nodeIndex));
		}
		if (left(nodeIndex) < m_capacity && m_data[left(nodeIndex)] >= 0)
		{
			stack.push(left(nodeIndex));
		}
	}
}
