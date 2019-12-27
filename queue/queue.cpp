#include "queue.h"


Queue::Queue() {
	head = tail = NULL;
	q_size = 0;
}

Queue::~Queue() {
	while (!empty()) {
		pop();
	}
}

void Queue::push(Data data) {
	Node *new_node = new Node(data);

	if (!tail) {
		head = tail = new_node;
	} else {
		tail->next = new_node;
		tail = new_node;
	}
	q_size++;
}

Data Queue::front() {
	if (tail) {
		return head->data;
	}
	std::cout << "No data" << "\n";
	return 0;
}

bool Queue::empty() {
	return tail == NULL;
}

void Queue::pop() {
	if (head) {
		Node *del_node = head;
		head = head->next;
		delete del_node;

		if (!head)
			tail = NULL;
		q_size--;
	} else {
		std::cout << "No data" << "\n";
	}
}

size_t Queue::size() {
	return q_size;
}
