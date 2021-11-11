#pragma once

template<typename T> class ListNode
{
public:
	int value;
	ListNode *next;

	ListNode();

	void insert(int newValue);
};