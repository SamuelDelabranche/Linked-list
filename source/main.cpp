#include "LinkedList.h"

#include <iostream>

using namespace std;
int main() {
	LinkedList _linkedlist_;


	_linkedlist_.printLinkedList();
	_linkedlist_.addValue(1);
	_linkedlist_.printLinkedList();
	_linkedlist_.addValue(10);
	_linkedlist_.printLinkedList();

	return 0;
}