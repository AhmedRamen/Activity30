#pragma once

#include <iostream>
#include <string>

class Textbox {
public:

	//Default construct
	Textbox() : value("") {}

	//Explicit construct now with the string
	explicit Textbox(const std::string& text) : value(text) {}

	void setValue(std::string& newValue) {
		value = newValue;
	}

	friend std::ostream& operator<<(std::ostream& os, const Textbox& box);

private:
	std::string value;
};

//Override << so it prints the text. (Via Microsoft)
std::ostream& operator<<(std::ostream& os, const Textbox& box) {
	os << box.value << std::endl;
	return os;
}