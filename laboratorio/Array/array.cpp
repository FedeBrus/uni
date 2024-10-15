#include <iostream>
#include "array.h"

template void array::print<int>(int vector[], int size);
template void array::print<double>(double vector[], int size);

void array::print(int vector[], int size) {
	std::cout << "[" << std::endl;
	for (int i = 0; i < size - 1; i++) {
		std::cout << vector[i] << ", ";
	}
	std::cout << vector[size - 1] << "]" << std::endl;
}

void array::print(double vector[], int size) {
	std::cout << "[" << std::endl;
	for (int i = 0; i < size - 1; i++) {
		std::cout << vector[i] << ", ";
	}
	std::cout << vector[size - 1] << "]" << std::endl;
}
