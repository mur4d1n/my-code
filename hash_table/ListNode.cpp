#include "ListNode.h"

void ListNode<int>::insert(int newValue)
{
	ListNode<int>* tmp = this;

	while (tmp->next != nullptr)
		tmp = tmp->next;

	tmp->value = newValue;
	tmp->next = new ListNode();
	return;
}

template <>
ListNode<int>::ListNode() {
	this->value = 0;
	this->next = nullptr;
}