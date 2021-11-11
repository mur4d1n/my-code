#include "HashTable.h"

HashTable::HashTable(int remainder) //Constructor for HashTable
{
	this->remainder = remainder;
	this->values = std::vector<ListNode<int>*>(remainder); //I used my own version of linked list for this task

	for (int i = 0; i < values.size(); i++)
		values[i] = new ListNode<int>();
}

void HashTable::insert(int newValue) //This function inserts given value to HashTable objects into one of the many linked lists
{
	this->values[newValue % remainder]->insert(newValue);
	return;
}
