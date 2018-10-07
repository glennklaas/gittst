#include "Widget.h" 
#include <string>
#include <iostream>

Widget::Widget() { 
	std::cout << "Creating a Widget" << std::endl;
	m_name="";
} 

std::string Widget::getName() {
	return m_name;
}

void Widget::setName(const std::string newName){
	m_name=newName;
}

Widget::~Widget(){
	std::cout << "Removing a Widget" << std::endl;
}

