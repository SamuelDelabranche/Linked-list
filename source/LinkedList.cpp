#include "LinkedList.h"

using namespace std;
LinkedList::LinkedList() { // constructor
	this->initVariables();
}

void LinkedList::initVariables() {
	this->_head = nullptr;
	this->_countNode = 0;
}

LinkedList::~LinkedList() { // destructor
	Node* current = this->_head;
	cout << "\n\nDestructor::Deleted element: ";

	while (current != nullptr) {
		Node* temp = current;
		current = current->_nextNode;
		cout << temp->_value << " -> ";

		delete temp;
	}
}



void LinkedList::addValue(int value) {
	Node* newNode = new Node(value); // create newNode pointing the value adress
	
	if (this->_head != nullptr) {
		Node* tempAdress = this->_head;

		while (tempAdress->_nextNode != nullptr) { tempAdress = tempAdress->_nextNode; } // tempAdress take the next node until he's nullptr
		tempAdress->_nextNode = newNode; // if it's the last node, it take the newNode adress;
		++this->_countNode; // Increment the count of Nodes

		return;

	} 
	this->_head = newNode; // if nullptr, he take the newNode adress
	++this->_countNode; // Increment the count of Nodes
}

void LinkedList::printLinkedList() const {
	if (this->_countNode <= 0) { cout << "\nEmpty List" << endl; }
	else {
		cout << "\n" << endl;
		Node* tempAdress = this->_head;
		unsigned int countBuffer(0);

		while (tempAdress != nullptr || countBuffer != this->_countNode) {
			cout << tempAdress->_value << " -> ";
			if (tempAdress != nullptr) { tempAdress = tempAdress->_nextNode; }
			countBuffer++;
		}
	}
}