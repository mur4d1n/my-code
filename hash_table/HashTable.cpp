#include "HashTable.h"

HashTable::HashTable(int remainder)
{
	this->remainder = remainder;
	this->values = std::vector<ListNode<int>*>(remainder);

	for (int i = 0; i < values.size(); i++)
		values[i] = new ListNode<int>();
}

void HashTable::insert(int newValue)
{
	this->values[newValue % remainder]->insert(newValue);
	return;
}
