#include <iostream>
#include "Widget.h"

int main() {
	std::cout << "BEGIN RUN" << std::endl;
	std::cout << "Hello, world!" << std::endl;

	Widget *newWidget = new Widget();
	
	newWidget->setName("Hello, world!");
	std::cout << newWidget->getName() << std::endl;

	delete newWidget;

	std::cout << "That's all folks." << std::endl;
	std::cout << "END RUN" << std::endl;
}
