#include "stack.h"
#include <iostream>

Stack::Stack() {
	top_ = -1;
}

Stack::~Stack() {

}

bool Stack::is_empty() {
	if (top_ == -1)
		return true;
	else
		return false;
}

bool Stack::is_full() {
	if (top_ == 7)
		return true;
	else
		return false;
}

void Stack::push_top(int value) {
	if (is_full())
		std::cout << "stack full\n";
	else {
		top_++;
		tab_[top_] = value;
	}
}

int Stack::pop_top(){
	if (is_empty()) {
		std::cout << "stack already empty\n";
		return 0;
	}
	else {
		int temp = tab_[top_];
		tab_[top_] = 0;
		top_--;
		return temp;
	}
}

void Stack::display_all_elements() {
	if (is_empty())
		std::cout << "stack empty\n";
	else
		for (int i = 0; i <= top_; i++) {
			std::cout << "at " << i << " level: " << tab_[i] << "\n";
		}
	std::cout << "\n\n";
}

int Stack::count() {
	return top_ + 1;
}

int Stack::find(int pointer) {
	if (is_empty()) {
		std::cout << "cant find anything in an empty stack.\n";
		return 0;
	}
	else return tab_[pointer];
}