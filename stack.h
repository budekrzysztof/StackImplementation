#pragma once

class Stack {

	int top_; //position of a top element. default set to -1 in a constructor when stack object is created
	int tab_[8] = { 0 }; //declaration of a stack size (change would require changing is_full() method) default = 8

public:

	Stack();
	Stack(int);
	~Stack();

	bool is_empty(); //check if stack is empty
	bool is_full(); //check if stack is full

	void push_top(int); //push a new value to the top
	void display_all_elements(); 

	int pop_top(); //deletes and returns object for the top
	int count(); //returns amount of objects in stack
	int find(int); //returns a value under given index

};