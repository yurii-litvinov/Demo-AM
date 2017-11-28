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
			break;
		}
		if (nodeNow->rightChild != nullptr) {
			nodeNow = nodeNow->rightChild;
			presentValue = nodeNow->value;
			break;
		}
		if (nodeNow->leftChild == nullptr && nodeNow->rightChild == nullptr) {
			return nullptr;
		}
		return nodeNow;
	}
}

Node* findParent(Tree* tree, int value)
{
	int presentValue = tree->head->value;
	Node* finded = nullptr;
	Node* nodeNow = tree->head;
	Node* parentNode = nullptr;
	while (presentValue != value) {
		if (nodeNow->leftChild != nullptr) {
			parentNode = nodeNow;
			nodeNow = nodeNow->leftChild;
			presentValue = nodeNow->value;
			break;
		}
		if (nodeNow->rightChild != nullptr) {
			parentNode = nodeNow;
			nodeNow = nodeNow->rightChild;
			presentValue = nodeNow->value;
			break;
		}
		if (nodeNow->leftChild == nullptr && nodeNow->rightChild == nullptr) {
			return nullptr;
		}
		return parentNode;
	}
}

Node* findMin(Tree* tree, Node* node)
{
	Node* current = node;
	while (current->leftChild != nullptr)
	{
		current = current->leftChild;
	}
	return current;
}

void deleteNode(Tree* tree, int value)
{
	Node* nodeToDelete = find(tree, value);
	Node* parentNode = findParent(tree, nodeToDelete->value);
	if (nodeToDelete->leftChild == nullptr && nodeToDelete->rightChild == nullptr)
	{
		if (parentNode->leftChild->value == nodeToDelete->value)
		{
			parentNode->leftChild = nullptr;
		}
		if (parentNode->rightChild->value == nodeToDelete->value)
		{
			parentNode->rightChild = nullptr;
		}
	}
	if (nodeToDelete->leftChild != nullptr && nodeToDelete->rightChild == nullptr)
	{
		if (parentNode->leftChild->value == nodeToDelete->value)
		{
			parentNode->leftChild = nodeToDelete->leftChild;
		}
		if (parentNode->rightChild->value == nodeToDelete->value)
		{
			parentNode->rightChild = nodeToDelete->leftChild;
		}
	}
	if (nodeToDelete->leftChild == nullptr && nodeToDelete->rightChild != nullptr)
	{
		if (parentNode->leftChild->value == nodeToDelete->value)
		{
			parentNode->leftChild = nodeToDelete->rightChild;
		}
		if (parentNode->rightChild->value == nodeToDelete->value)
		{
			parentNode->rightChild = nodeToDelete->rightChild;
		}
	}
	if (nodeToDelete->leftChild != nullptr && nodeToDelete->rightChild != nullptr)
	{
		if (parentNode->leftChild->value == nodeToDelete->value)
		{
			parentNode->leftChild = findMin(tree, nodeToDelete->rightChild);
		}
		if (parentNode->rightChild->value == nodeToDelete->value)
		{
			parentNode->rightChild = findMin(tree, nodeToDelete->rightChild);
		}
	}
	delete nodeToDelete;
}
void addNode(Tree* tree, int value)
{


}