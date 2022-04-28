// HelloWorld.cpp : My attempt at learning C++ from the very beginning.

#include <iostream>
#include <stdio.h>

int main() {
	std::cout << "Hello World!" << std::endl;
	printf("C makes an appearance!\nEnter a character. ");

	int letter = getchar();
	std::cout << (char) letter << " was printed." << std::endl;

	return EXIT_SUCCESS;
}
