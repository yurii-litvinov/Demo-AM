#pragma once
struct tree {

	tree *leftChild = nullptr;
	tree *rightChild = nullptr;
	tree *parent = nullptr;
	int value = 0;

};


tree *searchElement(tree *MyTree, int valueToFind);

void PrintUp(tree* MyTree);

void PrintDown(tree* MyTree);
