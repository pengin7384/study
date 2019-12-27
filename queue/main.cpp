#include "queue.h"
#include <iostream>

using namespace std;

int main()
{
	Queue que;

	que.push(1);
	que.push(2);
	que.push(3);
	que.push(4);
	

	while (!que.empty()) {
		int num = que.front();
		que.pop();

		cout << num << "\n";

	}

	que.push(5);
	que.push(6);
	que.push(7);
	que.push(8);

	
	while (!que.empty()) {
		int num = que.front();
		que.pop();

		cout << num << "\n";

	}

	que.pop();

	return 0;
}