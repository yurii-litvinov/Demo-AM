#include "Structures.h"
#include <iostream>

Node* find(Tree* tree, int value) {
	int presentValue = tree->head->value;
	Node* finded = nullptr;
	Node* nodeNow = tree->head;
	while (presentValue != value) {
		if (nodeNow->leftChild != nullptr) {
			nodeNow = nodeNow->leftChild;
			presentValue = nodeNow->value;
		}
	}
}

void deleteNode(Tree* tree, int value)
{

}
void addNode(Tree* tree, int value)
{


}