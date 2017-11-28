#pragma once
struct tree {

	tree *leftChild = nullptr;
	tree *rightChild = nullptr;
	tree *parent = nullptr;
	int value = 0;

};

tree *searchElement(tree *MyTree, int valueToFind);

void DeleteElement(int DeleteNumber);

// печать по возрастанию, рекурсивно
void PrintUp(tree* MyTree);

// печать по убыванию, рекурсивно
void PrintDown(tree* MyTree);

// find minimum element lower, then current 
tree* findMin(tree* element);

// find maximum element lower, then current
tree* findMax(tree* element);
