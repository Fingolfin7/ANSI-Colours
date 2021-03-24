#include <iostream>
#include <string>
#include "Colours.h"

std::string padRight(std::string str, const int num=1, std::string paddingChar = " ")
{
	std::string padding;

	if (num >= str.size()) {
		for (int i = 0; i < num - str.size(); i++) { 
			str.append(paddingChar); 
		}
	}
	else {
		str.append(paddingChar);
	}

	return str;
}

int main() {

	system("cls"); // the colours don't print properly outside of VS if you don't first clear the screen.

	int index = 0;

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {

			index > 99 ? std::cout << padRight(Colours::colourString("[_background_" + std::to_string(index) + std::string("_]  ")), 16) 
						 : std::cout << padRight(Colours::colourString("[_background_" + std::to_string(index) + std::string("_] ")), 16);

			std::cout << Colours::colourString("[reset]");
			index++;
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	index = 0;

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			std::cout << padRight(Colours::colourString("[_text_" + std::to_string(index) + std::string("_]") + std::to_string(index)),16);
			std::cout << Colours::colourString("[reset]");
			index++;
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	index = 0;

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			std::cout << padRight(Colours::colourString("[_background_" + std::to_string(index) + std::string("_]") + std::to_string(index)), 16);
			std::cout << Colours::colourString("[reset]");
			index++;
		}
		std::cout << std::endl;
	}

	std::cin.get();

	return 0;
}
