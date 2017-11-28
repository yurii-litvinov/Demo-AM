#include "Structures.h"
#include <iostream>

using namespace std;

int main()
{
	Tree* myTree = createTree(0);
	addNode(myTree, 2);
	addNode(myTree, 1);
	addNode(myTree, 3);
	return 0;
}