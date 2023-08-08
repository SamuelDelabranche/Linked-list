#pragma once
#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node
{
	public:
		Node(int value = 0, Node* nextAdress = nullptr);

		int _value;
		Node* _nextNode;
};	

#endif