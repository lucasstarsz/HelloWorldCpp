// HelloWorld.cpp : My attempt at learning C++ from the very beginning.

#include <iostream>

// Juuuust going to apply a tiny hack to trick the compiler into thinking the variable is used
void noop(int &) {
}

int main() {
	int undefined;
	noop(undefined);

	std::cout << "Hey look at this, an unitialized variable with the value " << undefined << ". Crazy\n";

	return EXIT_SUCCESS;
}
