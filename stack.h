#pragma once

class Stack {

	int top_;
	int tab_[8] = { 0 };

public:

	Stack();
	Stack(int);
	~Stack();

	bool is_empty();
	bool is_full();

	void push_top(int);
	void display_all_elements();

	int pop_top();
	int count();
	int find(int);

};