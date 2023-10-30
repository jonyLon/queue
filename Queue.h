#pragma once
#include <iostream>
using namespace std;
class Queue
{
public:
	Queue(const size_t& size, const size_t& step) : caparcity{ size }, step{step} {
		queue = new int[caparcity];
	}
	~Queue(){
		delete[] queue;
	}
	bool isEmpty() const{
		return last == -1;
	}
	bool isFull() const {
		return last == caparcity;
	}
	void enqueue(int data) {
		last++;
		if (isFull()) {
			resize();
		}
		queue[last] = data;
	}
	void dequeue() {
		first++;
		if (first == caparcity)
		{
			first = 0;
			last = -1;
		}
	}
	void show() {
		for (size_t i = first; i <= last; i++)
		{
			cout << queue[i] << "\t";
		}
		cout << endl;
	}


private:
	int first = 0;
	int last = -1;
	int* queue = nullptr;
	size_t caparcity;
	size_t counter = 4;
	size_t step;
	void resize(){
		caparcity += counter*step;
		int* tmp = new int[caparcity];
		for (size_t i = first; i < last; i++)
		{
			tmp[i] = queue[i];
		}
		delete[] queue;
		queue = tmp;
	}
};

