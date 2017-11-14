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