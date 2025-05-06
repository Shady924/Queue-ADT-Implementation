#pragma once 

#include<iostream>

template <class T>
class Queue {
private:
	int front;
	int rear;
	T* array;
	int size;
	int length;

public:


	Queue() {

		this->front = this->rear = -1;
		this->size = 10;
		this->array = new T[size];
		this->length = 0;

	}


	Queue(int s) {

		if (s < 0)
			this->size = 10;
		else
			this->size = s;

		this->front = this->rear = -1;
		this->array = new T[size];
		this->length = 0;

	}


	bool Full() const {

		return (this->rear == this->size - 1);

	}

	bool Isempty() const {

		return (this->length == 0);

	}


	void EnQueue(T x) {

		if (Full())
			std::cout << "Queue is full \n";
		else {
			this->rear++;
			this->array[this->rear] = x;
			this->length++;
		}

	}


	T DeQueue() {

		if (Isempty()) {
			std::cout << "Queue is empty \n";
			return T();
		}
		else {
			this->front++;
			this->length--;
			return this->array[this->front];
		}

	}


	T Peek() {

		
		if (Isempty()) {
			std::cout << "Queue is empty \n";
			return T();
		}
		else {
			return this->array[this->front + 1];
		}

	}

	void Display() const {

		if (Isempty())
			std::cout << "Queue is empty \n";
		else {
			for (int i = front + 1; i <= rear; ++i) {
				std::cout << " " << array[i];
			}
			std::cout << "\n";
		}

	}


	void clear() {

		this->front = this->rear = -1;
		this->length = 0;

	}

	int GetLength() const {

		return this->length;

	}

	~Queue() {

		delete[]array;

	}

};