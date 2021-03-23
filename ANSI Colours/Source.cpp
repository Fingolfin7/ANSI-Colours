#include <iostream>
#include <string>
#include "Colours.h"

int main() {
	std::string colouredSqr = "[_text_";

	system("cls"); // the colours don't print properly outside of VS if you don't first clear the screen.

	int index = 0;

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			std::cout << Colours::colourString("[_background_" + std::to_string(index) + std::string("_]   ") + "[reset]");
			index++;
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	index = 0;

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			if (index < 10) {
				std::cout << Colours::colourString("[_text_" + std::to_string(index) + std::string("_] ") + std::to_string(index) + " [reset]");
			}
			else if (index > 10 && index < 100) {
				std::cout << Colours::colourString("[_text_" + std::to_string(index) + std::string("_] ") + std::to_string(index) + "[reset]");
			}
			else {
				std::cout << Colours::colourString("[_text_" + std::to_string(index) + std::string("_]") + std::to_string(index) + "[reset]");
			}
			index++;
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	index = 0;

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			if (index < 10) {
				std::cout << Colours::colourString("[reversed][_text_" + std::to_string(index) + std::string("_] ") + std::to_string(index) + " [reset]");
			}
			else if (index >= 10 && index < 100) {
				std::cout << Colours::colourString("[reversed][_text_" + std::to_string(index) + std::string("_]") + std::to_string(index) + " [reset]");
			}
			else {
				std::cout << Colours::colourString("[reversed][_text_" + std::to_string(index) + std::string("_]") + std::to_string(index) + "[reset]");
			}
			index++;
		}
		std::cout << std::endl;
	}

	std::cin.get();

	return 0;
}