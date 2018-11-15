#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������ ����. ������������ ������ �2. ��������� ������� ��������, ��. 7302\n";

	LinkedList lst;
	lst.push_back(5);
	lst.push_back(4);
	lst.push_back(3);
	lst.push_back(0);
	lst.push_front(9);
	lst.push_front(6);
	lst.push_front(3);
	lst.push_front(2);
	lst.push_front(1);
	lst.push_front(7);

	LinkedList lst2;

	lst2.push_back(3);
	lst2.push_back(6);
	lst2.push_back(9);
	lst2.push_back(5);
	lst2.push_back(4);

	cout << "������:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "������ ������= " << lst.get_size();
	cout << endl;


	cout << "������ ������: \n";
	lst2.print_to_console();
	cout << "\n";

	bool contain = lst.contains(&lst2);
	if (contain == true)
		cout << "������ ������ ���������� ������ ������� \n";
	else
		cout << "������ ������ �� ���������� ������ ������� \n";

	lst.pop_front();
	cout << "������,����� �������� ������� ��������:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "����� ������ ��� ������������� ������� at:\n";
	lst.print_to_console();
	cout << endl;
	lst.pop_back();
	cout << "������,����� �������� ���������� ��������:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.insert(8, 5);
	cout << "������,����� ���������� ����� 8 �� ������� 5 :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.remove(6);
	cout << "������,����� �������� ����� �� 6 ������� :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	lst.set(2, -1);
	cout << "��� ������ ����� ������ ����� �� 2 ������� �� -1:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "�������� ������\n";
	lst.clear();
	cout << "�������� �� ������� ������:\n ";
	if (lst.isEmpty() == true) cout << "������ ����\n";
	else
		cout << " ������ �� ����";
	cout << endl;

	system("pause");
	return 0;
}