#pragma once
#include "ListNode.h"
#include <vector>

class HashTable
{
public:
	std::vector<ListNode<int>*> values;
	int remainder;

	HashTable(int remainder);

	void insert(int newValue);
};