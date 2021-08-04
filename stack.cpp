#include "stack.h"
#include <iostream>

Stack::Stack() {
	_top = -1;
}

Stack::~Stack() {

}

bool Stack::isEmpty() {
	if (_top == -1)
		return true;
	else
		return false;
}

bool Stack::isFull() {
	if (this->_top == 7)
		return true;
	else
		return false;
}

void Stack::pushTop(int value) {
	if (isFull())
		std::cout << "stack full\n";
	else {
		this->_top++;
		_tab[this->_top] = value;
	}
}

int Stack::popTop(){
	if (isEmpty()) {
		std::cout << "stack already empty\n";
		return 0;
	}
	else {
		int temp = _tab[this->_top];
		_tab[this->_top] = 0;
		_top--;
		return temp;
	}
}

void Stack::displayAllElements() {
	if (isEmpty())
		std::cout << "stack empty\n";
	else
		for (int i = 0; i <= _top; i++) {
			std::cout << "at " << i << " level: " << _tab[i] << "\n";
		}
	std::cout << "\n\n";
}

int Stack::count() {
	return _top + 1;
}

int Stack::find(int pointer) {
	if (isEmpty()) {
		std::cout << "cant find anything in an empty stack.\n";
		return 0;
	}
	else return _tab[pointer];
}