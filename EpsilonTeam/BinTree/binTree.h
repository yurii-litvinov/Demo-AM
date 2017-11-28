#pragma once
struct tree {

	tree *leftChild = nullptr;
	tree *rightChild = nullptr;
	tree *parent = nullptr;
	int value = 0;

};

void DeleteElement(int DeleteNumber);

// печать по возрастанию, рекурсивно
void PrintUp(tree* MyTree);

// печать по убыванию, рекурсивно
void PrintDown(tree* MyTree);