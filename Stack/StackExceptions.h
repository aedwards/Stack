//header file for custom exceptions
#include <iostream>
using namespace std;

//stack overflow
class StackOverflowException {
public:
	StackOverflowException() {
		cout << "Stack overflow" << endl;
	}
};


//stack underflow
class StackUnderflowException {
public:
	StackUnderflowException() {
		cout << "Stack underflow" << endl;
	}
};