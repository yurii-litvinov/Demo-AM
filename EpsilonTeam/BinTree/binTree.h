#pragma once
struct tree {

	tree *leftChild = nullptr;
	tree *rightChild = nullptr;
	tree *parent = nullptr;
	int value = 0;

};

void PrintUp(tree* MyTree);

void PrinDown(tree* MyTree);