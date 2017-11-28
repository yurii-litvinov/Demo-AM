#pragma once

struct Node
{
	int value = 0;
	Node* leftChild = nullptr;
	Node* rightChild = nullptr;
};

struct Tree
{
	Node* head = nullptr;
};

Node* find(Tree* tree, int value);
void deleteNode(Tree* tree, int value);
void addNode(Tree* tree, int value);
Tree* createTree(); // Root node will have the startValue as it's value