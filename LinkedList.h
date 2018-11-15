#pragma once
class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	size_t get_size() const;
	void push_back(int newElem);
	void push_front(int newElem);
	void pop_back();
	void pop_front();
	void insert(int n, size_t index);
	void remove(size_t index);
	int at(size_t index) const;
	void print_to_console();
	void clear();
	void set(size_t index, int elem);
	bool isEmpty();
	bool contains(LinkedList *lst);
	bool equals(LinkedList *lst);


private:
	void add_first(int newElem);
	void reset_list();

	class Node
	{
	public:
		Node(int data, Node * next = nullptr)
		{
			this->data = data;
			this->next = next;
		};
		~Node() {};

		int data;
		Node * next;
	};
	Node * head;
	Node * tail;

	size_t size;

};