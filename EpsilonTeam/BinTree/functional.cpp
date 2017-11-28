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