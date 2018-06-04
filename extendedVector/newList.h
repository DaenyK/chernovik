#pragma once
#include "Headers.h"

template <typename T>
class List {
protected:
	class Node {
	public:
		T data;
		Node * nextPtr;
		Node(T data) {
			this->data = data;
			nextPtr = nullptr;
		}
	}*firstPtr, *lastPtr;
	size_t count;

public:
	List()
	{
		firstPtr = nullptr;
		lastPtr = nullptr;
		count = 0;
	}

	void pushback(T data);
	void pushfront(T data);
	void removeLast();
	void removeFirst();
	bool find(T data);
	void print();
	size_t Size();
	virtual ~List();
};
