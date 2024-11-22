/*
create a class that call text box that has a private attribute called value with string type. 
make sure that we can use this class properly. 
Then add two constructors to the tex box class a default constructor and a constructor that takes a string object, 
declared the second constructor using the explicit keyword.
*/


//Hello world with extra steps.
#include "textbox.h"

int main() {
	Textbox text{ "Hello world! Hello CIS25." };
	std::cout << text;
}