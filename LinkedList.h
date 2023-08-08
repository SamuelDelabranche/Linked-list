#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

class LinkedList {
	private:
		Node* _head; // first adress to null 
		int _countNode;

		void initVariables();
	public:
		LinkedList();
		~LinkedList();

		void addValue(int value);
		void deleteValue(int position);
		void printLinkedList() const;


};

#endif