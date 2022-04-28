// HelloWorld.cpp : My attempt at learning C++ from the very beginning.

#include <iostream>

int main() {
	std::cout << "Hey so I'm gonna need you to input a number kthx: ";

	int num = 0;
	std::cin >> num;
	std::cout << "\nOk so like you put " << num << " and I'm really proud of you haha\n";

	std::cout << "And now I need two numbers separated by a space ok go: ";

	double x = 0.0;
	double y = 0.0;
	std::cin >> x >> y;
	std::cout << "\nCool so " << x << " + " << y << " = " << x + y << "\n";

	return EXIT_SUCCESS;
}
