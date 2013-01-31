//Simple Linked List implementation of a stack.

#include <iostream>
using namespace std;
#include "StackClass.h"




int main() {

	Stack myStack;

	cout << "\n";
	myStack.Size();
	
	myStack.Push(35);
	myStack.Push(85);
	myStack.Push(329);

	cout << "\nCurrent top of stack: ";
	myStack.Top();
	myStack.Size();

	cout << "\n\nPopping off the current item off the stack and returning the new current top of stack.." << endl;
	myStack.Pop();
	myStack.Size();

	getchar();
	return 0;
};