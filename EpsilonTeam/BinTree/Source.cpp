#include <iostream>
#include "binTree.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	cout << "создайте новое дерево, введф новый элемент" << endl;
	int x;
	cin >> x;
	int choose = 0;
	cout << "0 - выйти" << endl;
	cout << "1 - добавить элемент" << endl;
	cout << "2 - проверить принадлежность" << endl;
	cout << "3 - удалить элемент" << endl;
	cout << "4 - удалить дерево" << endl;
	cout << "5 - печать по возрастанию" << endl;
	cout << "6 - печать по убыванию" << endl;
	cin >> choose;
	while (choose != 0)
	{
		switch (choose)
		{
		case 1: {
			cout << "введите новый элемент" << endl;
			int x = 0;
			cin >> x;
			break;
		}
		case 2: {
			cout << "введите элемент для проверки" << endl;
			int x = 0;
			cin >> x;
			break;
		}
		case 3: {
			cout << "введите элемент, который ъотите удалить" << endl;
			int x = 0;
			cin >> x;
			break;
		}
		case 4: {
			break;
		}
		case 5: {
			PrintUp(MyTree);
			cout << endl;
			break;
		}
		case 6: {
			PrintDown(MyTree);
			cout << endl;
			break;
		}
		case 7: {
			system("cls");
			break;
		}
		default:
			break;
		}
			cout << "0 - выйти" << endl;
			cout << "1 - добавить элемент" << endl;
			cout << "2 - проверить принадлежность" << endl;
			cout << "3 - удалить элемент" << endl;
			cout << "4 - удалить дерево" << endl;
			cout << "5 - печать по возрастанию" << endl;
			cout << "6 - печать по убыванию" << endl;
			cout << "7 - очистить экран" << endl;
			cin >> choose;
	}
	system("pause");
	return 0;
}