#pragma once
template <typename T>
class Vector {
protected:
	T * els;
	size_t cur_size;
	size_t buf_size;

public:
	Vector() {
		els = nullptr;
		cur_size = 0;
		buf_size = 0;
	}

	Vector(size_t size) {
		buf_size = size;
		cur_size = size;
		els = new T[buf_size];
	}

	Vector(const Vector&obj) {
		this->cur_size = obj.cur_size;
		this->buf_size = obj.cur_size;

		this->els = new T[cur_size];

		for (int i = 0; i < cur_size; i++)
			els[i] = obj.els[i];
	}

	void push_back(T el) {
		if (buf_size == 0)
		{
			buf_size = 2;
			els = new T[buf_size];
		}
		else if (buf_size <= cur_size)
		{
			buf_size *= 2;
			T * tmp = new T[buf_size];
			for (int i = 0; i < cur_size; i++)
				tmp[i] = els[i];
			delete[]els;
			els = tmp;
		}

		els[cur_size++] = el;
	}

	void pop_back()
	{
		cur_size--;
	}

	T & at(size_t index) {
		return els[index];
	}

	size_t size() {
		return cur_size;
	}

	virtual ~Vector() {
		delete[] els;
	}
};
