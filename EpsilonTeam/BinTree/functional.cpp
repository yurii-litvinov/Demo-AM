#include <iostream>
#include "binTree.h"

using namespace std;

void PrintUp(tree* MyTree) {
	if (MyTree->leftChild != nullptr) {
		PrintUp(MyTree->leftChild);
	}
	cout << MyTree->value;
	if (MyTree->rightChild != nullptr) {
		PrintUp(MyTree->rightChild);
	}
}

void PrintDown(tree* MyTree) {
	if (MyTree->rightChild != nullptr) {
		PrintUp(MyTree->rightChild);
	}
	cout << MyTree->value;
	if (MyTree->leftChild != nullptr) {
		PrintUp(MyTree->leftChild);
	}
}

tree *searchELement(tree *MyTree, int valueToFind) {
	tree *treeWalker = MyTree;
	while (treeWalker != nullptr) {
		if (valueToFind < treeWalker->value) {
			treeWalker = treeWalker->leftChild;
		}
		else {
			if (valueToFind > treeWalker->value) {
				treeWalker = treeWalker->leftChild;
			}
			else {
				return treeWalker;
			}
		}
	}
	return nullptr;
}

tree* findMin(tree* element) {
	while (element->leftChild != nullptr) {
		element = element->leftChild;
	}
	return element;
}

tree* findMax(tree* element) {
	while (element->rightChild != nullptr) {
		element = element->rightChild;
	}
	return element;
}

void PushElement(tree* myTree, int value)
{
	if (value == myTree->value)
	{
		return;
	}
	else if (value < myTree->value)
	{
		if (myTree->leftChild == nullptr)
		{
			tree* newChild = new tree;
			newChild->value = value;
			myTree->leftChild = newChild;
		}
		else
		{
			PushElement(myTree->leftChild, value);
		}
	}
	else if (value > myTree->value)
	{
		if (myTree->rightChild == nullptr)
		{
			tree* newChild = new tree;
			newChild->value = value;
			myTree->rightChild = newChild;
		}
		else
		{
			PushElement(myTree->rightChild, value);
		}
	}
}