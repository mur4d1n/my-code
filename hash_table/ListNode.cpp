#include "ListNode.h"

void ListNode<int>::insert(int newValue) //Insertion function for hand-made linked list
{
	ListNode<int>* tmp = this;

	while (tmp->next != nullptr)
		tmp = tmp->next;

	tmp->value = newValue;
	tmp->next = new ListNode();
	return;
}

template <>
ListNode<int>::ListNode() { //Constructor for empty ListNode object
	this->value = 0;
	this->next = nullptr;
}
