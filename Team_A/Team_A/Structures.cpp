#include "Structures.h"
#include <iostream>

Node* find(Tree* tree, int value)
{
	int presentValue = tree->head->value;
	Node* finded = nullptr;
	Node* nodeNow = tree->head;
	while (presentValue != value)
	{
		if (nodeNow->leftChild != nullptr)
		{
			nodeNow = nodeNow->leftChild;
			presentValue = nodeNow->value;
			break;
		}
		if (nodeNow->rightChild != nullptr)
		{
			nodeNow = nodeNow->rightChild;
			presentValue = nodeNow->value;
			break;
		}
		if (nodeNow->leftChild == nullptr && nodeNow->rightChild == nullptr)
		{
			return nullptr;
		}
		return nodeNow;
	}
}

void deleteNode(Tree* tree, int value)
{

}
void addNode(Tree* tree, int value)
{
	Node* current = tree->head;
	bool found = false;
	while (!found)
	{
		if (value < current->value)
		{
			if(current->leftChild != nullptr)
				current = current->leftChild;
			else
			{
				Node* toAdd = new Node;
				toAdd->value = value;
				current->leftChild = toAdd;
				found = true;
			}
		}
		else if (value > current->value)
		{
			if(current->rightChild != nullptr)
				current = current->rightChild;
			else
			{
				Node* toAdd = new Node;
				toAdd->value = value;
				current->rightChild = toAdd;
				found = true;
			}
		}
		else
		{
			found = true;
		}
	}
}