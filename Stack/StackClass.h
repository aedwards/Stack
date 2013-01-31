//Class implementation of a stack
#include <iostream>
using namespace std;
#include "Node.h"
#include "StackExceptions.h"


class Stack {

private:
	Node *top;
	int count;

public:
	
	//default ctor
	Stack() {
		//initialize an empty stack
		top = NULL;
		count = 0;
	}

	void Push(int data) {
		Node *temp = new Node();
		temp->data = data;
		temp->next = top;
		top = temp;
		cout << "Pushing: " << top->data << endl;
		count++;
	}

	int Pop() {
		if(top == NULL) {
			throw new StackUnderflowException();
		}

		int topValue = top->data;
		Node* temp = top->next;
		delete top;		//deallocate the top pointer before it is reassigned to the value below
		top = temp;		//point top to the next value on stack
		count--;
		cout << top->data << endl;
		return topValue;
	}

	
	int Top() {
		if(top == NULL) {
			cout << "Empty stack" << endl;
			return NULL;
		}
		cout << top->data << endl;
		return top->data;
	}

	int Size() {
		cout << "Current size of stack: " << count << endl;
		return count;
	}

};