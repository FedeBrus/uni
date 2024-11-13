#include <iostream>
#include "array.h"

void array::print(int vector[], int size) {
	std::cout << "[" << std::endl;
	for (int i = 0; i < size - 1; i++) {
		std::cout << vector[i] << ", ";
	}
	std::cout << vector[size - 1] << "]" << std::endl;
}