#include <iostream>
#include "stack.h"

int main(int argc, char* argv[]) {
	Stack object;
	Stack* ptr;
	ptr = &object;

	ptr->push_top(200);
	ptr->push_top(956);
	ptr->push_top(520);
	ptr->push_top(16);
	ptr->push_top(620);
	ptr->push_top(296);

	ptr->display_all_elements();
	std::cout << ptr->count() << "\n";
	std::cout << "at 5 level: " << ptr->find(5) << "\n";

	return 0;
}