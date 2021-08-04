#pragma once

class Stack {

	int _top;
	int _tab[8] = { 0 };

public:

	Stack();
	Stack(int);
	~Stack();

	bool isEmpty();
	bool isFull();

	void pushTop(int);
	void displayAllElements();

	int popTop();
	int count();
	int find(int);

};