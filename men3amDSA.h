#pragma once
#include <iostream>

//class of a node with one link
template <typename T>
class node_1l {
	node_1l* next_node_ptr;
	T value;
	node_1l(node_1l* next_node=nullptr, const T& data= T{}) :next_node_ptr(next_node), value(data) {}
};

template<typename T>
class StaticStack {
	private:
		T* StackArray;
		int top;
		const int size;

	public:
		StaticStack(const int& size):StackArray(new T[size]), top(-1),size(size) {}
		
		bool IsFull() {
			return (top == (size - 1));
		}
		bool IsEmpty() {
			return (top == -1);
		}


		void push(const T& element) {

			if (IsFull()){
				std::cout << "stack is full";
			}
			else {
				StackArray[++top] = element;
			}
		}

		T pop() {
			if (IsEmpty()) {
				std::cout << "stack if empty";
			}
			else {
				top--;
				return (StackArray[top + 1]);
			}
		}

		void show() {
			if (IsEmpty()) {
				std::cout << "stack if empty";
			}
			else if (IsFull()) {
				std::cout << "stack is full";
			}
			else {
				std::cout <<"top:"<<'\n';
				for (int i = top; i >= 0; i--) {
					std::cout << StackArray[i] << '\n';
				}
			}
		}

};

