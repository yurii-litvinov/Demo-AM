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

void DeleteElement(tree* MyTree, int DeleteNumber) {
	tree* DeleteTreeElement = Search(MyTree, DeleteNumber);
	if ((DeleteTreeElement->leftChild == nullptr) && (DeleteTreeElement->rightChild == nullptr)) {
		if (DeleteTreeElement->parent = nullptr) {
			delete DeleteTreeElement;
			return;
		}
		else {
			if (DeleteTreeElement->parent->rightChild == DeleteTreeElement) {
				DeleteTreeElement->parent->rightChild = nullptr;
				delete DeleteTreeElement;
				return;
			}
			else {
				DeleteTreeElement->parent->leftChild = nullptr;
				delete DeleteTreeElement;
				return;
			}
		}
	}

	if (DeleteTreeElement->rightChild) {
		tree* TempTree
	}
}