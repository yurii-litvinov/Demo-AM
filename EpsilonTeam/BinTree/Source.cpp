#include <iostream>
#include "binTree.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	cout << "�������� ����� ������, ����� ����� �������" << endl;
	int x;
	cin >> x;
	int choose = 0;
	cout << "0 - �����" << endl;
	cout << "1 - �������� �������" << endl;
	cout << "2 - ��������� ��������������" << endl;
	cout << "3 - ������� �������" << endl;
	cout << "4 - ������� ������" << endl;
	cout << "5 - ������ �� �����������" << endl;
	cout << "6 - ������ �� ��������" << endl;
	cin >> choose;
	while (choose != 0)
	{
		switch (choose)
		{
		case 1: {
			cout << "������� ����� �������" << endl;
			int x = 0;
			cin >> x;
			break;
		}
		case 2: {
			cout << "������� ������� ��� ��������" << endl;
			int x = 0;
			cin >> x;
			break;
		}
		case 3: {
			cout << "������� �������, ������� ������ �������" << endl;
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
			cout << "0 - �����" << endl;
			cout << "1 - �������� �������" << endl;
			cout << "2 - ��������� ��������������" << endl;
			cout << "3 - ������� �������" << endl;
			cout << "4 - ������� ������" << endl;
			cout << "5 - ������ �� �����������" << endl;
			cout << "6 - ������ �� ��������" << endl;
			cout << "7 - �������� �����" << endl;
			cin >> choose;
	}
	system("pause");
	return 0;
}