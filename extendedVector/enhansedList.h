#pragma once
#include "newList.h"


template <typename T>
class EnhancedList :public List<T> {
public:

	T & operator[](int index)
	{
		Node *cp = this->firstPtr;
		int *tmp;
		tmp = new int[this->Size()];
		int count = 0;
		tmp[0] = this->firstPtr->data;
		if (index >= this->Size())
		{
			cout << "индексирование невозможно\n";
			system("pause");
			exit(1);
		}
		if (index == 0)
			return tmp[0];
		while (cp != this->lastPtr)
		{
			cp = cp->nextPtr;
			count++;
			tmp[count] = cp->data;
			if (count == index)
				return tmp[count];
		}
	}
};
