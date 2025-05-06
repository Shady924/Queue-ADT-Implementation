#pragma once 

#include<iostream>

template <class T>
class Queue {
private:
	struct Node {
		T data; 
		Node* next;
	};
	Node* front;
	Node* rear;
	int length;

public:


	Queue() {

		this->front = this->rear = nullptr;
		this->length = 0;
	
	}


	bool Full() const {

		Node* p = new Node; 
		bool check = (p == nullptr) ? 1 : 0;
		delete p;
		return check;

	}

	bool Isempty() const {
		
		return (this->front == nullptr);
		
	}


	void EnQueue(T x) {

		if (Full())
			std::cout << "Queue is full \n";
		else {
			Node* t = new Node; 
			t->data = x;
			t->next = nullptr;
			this->length++;
			if(Isempty()){
				this->front = this->rear = t; 
			}
			else {
				this->rear->next = t; 
				this->rear = t; 
			}
		}

	}


	T DeQueue() {

		if (Isempty()) {
			std::cout << "Queue is empty \n";
			return T();
		}
		else {
			this->length--;
			Node* t = this->front;
			T x = t->data;
			this->front = this->front->next; 
			if (this->front == nullptr) this->rear = nullptr;
			delete t; 
			return x;	
		}

	}


	T Peek() {

		if (Isempty()) {
			std::cout << "Queue is empty \n";
			return T();
		}
		else {
			return this->front->data;
		}

	}

	void Display() const {

		if (Isempty())
			std::cout << "Queue is empty \n";
		else {
			Node* t = this->front; 
			while (t != nullptr) {
				std::cout << t->data << " ";
				t = t->next; 
			}
			std::cout << "\n";
		}	

	}


	void clear() {

		while (this->front != nullptr) {
			Node* t = this->front;
			this->front = this->front->next;
			delete t; 
		}
		this->rear = nullptr; 
		this->length = 0;

	}

	int GetLength() const {

		return this->length;

	}

	~Queue() {

		clear();

	}

};