#include <iostream>
#include "array.h"

namespace array {

	void print(int vector[], int size) {
		std::cout << "[" << std::endl;
		for (int i = 0; i < size - 1; i++) {
			std::cout << vector[i] << ", ";
		}
		std::cout << vector[size - 1] << "]" << std::endl;
	}


}