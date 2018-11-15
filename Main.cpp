#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Добрый день. Лабораторная работа №2. Выполнила Скокова Виктория, гр. 7302\n";

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

	cout << "Список:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "Размер списка= " << lst.get_size();
	cout << endl;


	cout << "Второй список: \n";
	lst2.print_to_console();
	cout << "\n";

	bool contain = lst.contains(&lst2);
	if (contain == true)
		cout << "Второй список содержится внутри первого \n";
	else
		cout << "Второй список не содержится внутри первого \n";

	lst.pop_front();
	cout << "Список,после удаления первого элемента:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "Вывод списка без использования функции at:\n";
	lst.print_to_console();
	cout << endl;
	lst.pop_back();
	cout << "Список,после удаления последнего элемента:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.insert(8, 5);
	cout << "Список,после добавление числа 8 по индексу 5 :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.remove(6);
	cout << "Список,после удаления числа по 6 индексу :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	lst.set(2, -1);
	cout << "Наш список после замены числа на 2 позиции на -1:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "Удаление списка\n";
	lst.clear();
	cout << "Проверка на пустоту списка:\n ";
	if (lst.isEmpty() == true) cout << "Список пуст\n";
	else
		cout << " Список не пуст";
	cout << endl;

	system("pause");
	return 0;
}