#include <iostream>

typedef int Data;

struct Node {
	Data data;
	Node *next;
	
	Node(Data data) : data(data) {
		next = NULL;
	}
};

class Queue {
	Node *head;
	Node *tail;
	size_t q_size;

public:

	Queue();
	~Queue();
	void push(Data data);
	Data front();
	bool empty();
	void pop();
	size_t size();
};