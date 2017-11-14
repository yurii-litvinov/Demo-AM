#include <iostream>
#include "binTree.h"

using namespace std;

void PrintUp(tree* MyTree) {
	while (MyTree->leftChild != nullptr)
	{
		MyTree = MyTree->leftChild;
	}
	cout << MyTree->value;
	if (MyTree->parent != nullptr) {
		cout << MyTree->value;
	}
	if (MyTree->rightChild != nullptr) {
		PrintUp(MyTree->rightChild);
	}
	return;
}