#pragma once
#include "vector.h"

template <typename T>
class EnhancedVector :public Vector<T> {
public:
	T & operator[](size_t index) {
		 if (index >= this->cur_size)
			throw ("incorrect index");
		else	return this->els[index];
	}
};
