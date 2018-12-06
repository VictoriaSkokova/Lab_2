#include <stdexcept>
#include <iostream>
#include "LinkedList.h"

using namespace std;
void LinkedList::reset_list()
{
	head = nullptr;
	tail = nullptr;
}

LinkedList::LinkedList()
{
	reset_list();
	size = 0;
}


LinkedList::~LinkedList()
{
	clear();
}

void LinkedList::add_first(int newElem)
{
	head = new Node(newElem);
	tail = head;
}


size_t LinkedList::get_size() const
{
	return size;
}

void LinkedList::push_back(int newElem)
{
	if (size == 0) {
		add_first(newElem);
	}
	else {
		tail->next = new Node(newElem);
		tail = tail->next;
	}
	size++;
}


void LinkedList::push_front(int newElem)
{
	if (size == 0) {
		add_first(newElem);
	}
	else {
		head = new Node(newElem, head);
	}
	size++;

}

void LinkedList::pop_back()
{
	if (size == 0) return;

	if (size == 1) {
		delete head;
		reset_list();
	}
	else {
		Node * current = head;
		while (current->next != tail) {
			current = current->next;
		}
		current->next = nullptr;
		delete tail;
		tail = current;
	}
	size--;
}
void LinkedList::pop_front()
{
	if (size == 0) return;

	if (size == 1)
	{
		delete head;
		reset_list();
	}
	else
	{
		Node * current = head;
		head = head->next;

		delete current;
	}
	size--;
}

int LinkedList::at(size_t index) const
{
	if ((index >= size) || (index < 0)) {
		throw out_of_range("Wrong index");
	}
	else {
		size_t counter = 0;
		Node * current = head;
		while (counter != index) {
			current = current->next;
			counter++;
		}
		return current->data;
	}
}

void LinkedList::insert(int n, size_t index)
{
	if (size != 0)
	{
		if ((index >= size) || (index < 0)) {
			throw out_of_range("Wrong size");
		}
		else {
			if (index == 0)
			{
				push_front(n);
			}
			else {
				if (index == size)
				{
					push_back(n);

				}
				else
				{
					size_t counter = 0;
					Node * current = head;
					while (counter != index - 1) {
						current = current->next;
						counter++;
					}
					//head = new Node(newElem, head);
					Node *newelem = new Node(n);
					newelem->next = current->next;
					current->next = newelem;
					size++;
				}
			}
		}
	

	}
	else push_front(n);
}

void LinkedList::remove(size_t index) 
{
	if (size != 0) {
		if ((index >= size) || (index < 0))
		{
			throw out_of_range("Wrong index");
		}
		else
		{
			size_t counter = 0;
			Node * current = head;
			Node * prev = head;

			while (counter != index)
			{
				prev = current;
				current = current->next;
				counter++;
			}

			if (current == head)
			{
				head = current->next;
			}
			else
			{
				prev->next = current->next;
			}

			delete(current);
			size--;
		}
	}
}

void LinkedList::print_to_console() 
{
	Node * current = head;
	while (current != NULL) {
		cout << current->data << " ";
		current = current->next;

	}
}
void LinkedList::clear() 
{

	for (size_t i = 0; i < get_size() + 6
		; i++) {

		pop_front();

	}
}
void LinkedList::set(size_t index, int elem) 
{
	if (size != 0)
	{
		if ((index >= size) || (index < 0)) {
			throw out_of_range("Wrong index");
		}
		else {

			size_t counter = 0;
			Node * current = head;
			while (counter != index) {
				current = current->next;
				counter++;
			}
			current->data = elem;

		}
	}

}
bool LinkedList::isEmpty() 
{
	if (size == 0)
		return true;
	else
		return false;
}

bool LinkedList::contains(LinkedList *lst) 
{
	Node * current = head;
	Node * current1 = lst->head;
	if (lst->size == 0)
		return true;
	if (lst->size > size)
		return false;
	while (current->data != current1->data)
	{
		if (current->next == NULL)
			return false;
		current = current->next;
	}  //äîõîäèì äî ýëåìåíòà

	while (current1 != NULL)
	{
		if (current == NULL)
			return false;
		if (current1->data != current->data)
			return false;
		current1 = current1->next;
		current = current->next;
	}
	return true;

}

bool LinkedList::equals(LinkedList *lst) 
{
	Node * current = head;
	Node * current1 = lst->head;

	if (lst->size != size)
		return false;

	while (current1 != NULL)
	{
		if (current1->data != current->data)
			return false;
		current1 = current1->next;
		current = current->next;
	}
	return true;


}
