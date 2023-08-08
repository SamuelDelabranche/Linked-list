#include "node.h"

using namespace std;
Node::Node(int value, Node* nextAdress): _value(value), _nextNode(nextAdress) {
	cout << "New node created: " << endl;
	cout << "\tValue: " << this->_value << "\n\tAdress: " << this << "\n\tPointing Adress: " << this->_nextNode << endl;
}