#include <iostream>
#include "stack.h"

int main(int argc, char* argv[]) {

	Stack object;
	
	Stack* ptr;

	ptr = &object;

	ptr->pushTop(69);
	ptr->pushTop(200);
	ptr->pushTop(956);
	ptr->pushTop(520);
	ptr->pushTop(16);
	ptr->pushTop(620);
	ptr->pushTop(296);

	ptr->displayAllElements();
	std::cout << ptr->count() << "\n";
	std::cout << "at 5 level: " << ptr->find(5) << "\n";




	
	
	

	






}