#include <iostream>
#include <cmath>
#include "array.h"

namespace array {

    int* create(int size) {
		return size > 0 ? new int[size] : nullptr;
	}

    int* create(int size, int value) {
		int* arr;	
		if (size > 0) {
			arr = new int[size];
			for (int i = 0; i < size; i++)
				arr[i] = value;
		} else {
			arr = nullptr;
		}

		return arr;
	}

    void initialize(int* arr, int size, int value) {
		for (int i = 0; i < size; i++)
			arr[i] = value;
	}

    void resize(int*& arr, int size, int new_size) {
		if (new_size > 0) {
			int* new_arr = new int[new_size];
			for (int i = 0; i < (size < new_size ? size : new_size); i++) {
				new_arr[i] = arr[i];
			}
			
			for (int i = size; i < new_size; i++) {
				new_arr[i] = 0;
			}

			delete [] arr;
			arr = new_arr;
		} else {
			arr = nullptr;
		}
	}

    int get(int* arr, int size, int pos) {
		if (pos < 0) {
			pos += size;
		}

		if (pos >= 0 && pos < size) {
			return arr[pos];
		} else {
			std::cerr << "Index out of bounds" << std::endl;
			exit(1);
		}
	}

    void set(int* arr, int size, int pos, int value) {
		if (pos < 0) {
			pos += size;
		}

		if (pos >= 0 && pos < size) {
			arr[pos] = value;
		} else {
			std::cerr << "Index out of bounds" << std::endl;
			exit(1);
		}
	}

    void swap(int* arr, int size, int a, int b) {
		int tmp = get(arr, size, a);
		set(arr, size, a, get(arr, size, b));
		set(arr, size, b, tmp);
	}

    void shift_left(int* arr, int size, int n) {
		if (n < size) {
			for (int i = 0; i < size - n; i++) {
				swap(arr, size, i, i + n);
			}

			for (int i = size - n; i < size; i++) {
				arr[i] = 0;
			}
		} else {
			initialize(arr, size, 0);
		}
	}

    void shift_right(int* arr, int size, int n) {
		if (n < size) {
			for (int i = size - 1; i >= n; i--) {
				swap(arr, size, i, i - n);
			}

			for (int i = n - 1; i >= 0; i--) {
				arr[i] = 0;
			}
		} else {
			initialize(arr, size, 0);
		}
	}

	void rotate_left(int* arr, int size, int n) {
		if (size > 0 && n > 0) {
			n %= size;
			reverse(arr, size, 0, n);
			reverse(arr, size, n, size);
			reverse(arr, size);
		}
	}

    void rotate_right(int* arr, int size, int n) {
		if (size > 0 && n > 0) {
			n %= size;
			reverse(arr, size);
			reverse(arr, size, 0, n);
			reverse(arr, size, n, size);
		}
	}

    void reverse(int* arr, int size) {
		if (size > 0) {
			for (int i = 0; i < size / 2; i++)
				swap(arr, size, i, size - i - 1);
		}
	}
	
    void reverse(int* arr, int size, int a, int b) {
		if (size > 0 && a >= 0 && a <= size && b >= 0 && b <= size && a < b) {
			for (int i = a; i < (a + b) / 2; i++) {
				swap(arr, size, i, b - 1 - (i - a));
			}
		}
	}

    int* copy(int* arr, int size) {
		int* copy = nullptr;	
		if (size > 0) {
			copy = new int[size];
			for (int i = 0; i < size; i++) {
				copy[i] = arr[i];
			}
		}

		return copy;
	}

    int* copy(int* arr, int size, int a, int b) {
		int* copy = nullptr;
		if (size > 0 && a >= 0 && a <= size && b >= 0 && b <= size && a < b) {
			copy = new int[b - a];
			for (int i = 0; i < b - a; i++) {
				copy[i] = arr[i + a];
			}
		}

		return copy;
	}

	int linear_search(int* arr, int size, int target) {
		int pos = -1;
		bool found = false;

		for (int i = 0; !found && i < size; i++) {
			if (arr[i] == target) {
				pos = i;
				found = true;
			}
		}

		return pos;
	}

	static int binary_search_rec(int* arr, int size, int target, int a, int b) {
		if (a > b) return -1;

		int c = (a + b) / 2;
		if (arr[c] < target) return binary_search_rec(arr, size, target, c + 1, b);
		if (arr[c] > target) return binary_search_rec(arr, size, target, a, c - 1);

		return c;
	}

	int binary_search(int* arr, int size, int target) {
		return binary_search_rec(arr, size, target, 0, size - 1);
	}

	int min(int* arr, int size) {
		if (size > 0) {
			int min = arr[0];
			for (int i = 1; i < size; i++) {
				if (arr[i] < min) {
					min = arr[i];
				}
			}

			return min;
		}

		std::cerr << "Empty array" << std::endl;
		exit(1);
	}

	int max(int* arr, int size) {
		if (size > 0) {
			int max = arr[0];
			for (int i = 1; i < size; i++) {
				if (arr[i] > max) {
					max = arr[i];
				}
			}

			return max;
		}

		std::cerr << "Empty array" << std::endl;
		exit(1);
	}

    int min_pos(int* arr, int size) {
		int pos = -1;
		if (size > 0) {
			int min = arr[0];
			pos = 0;
			for (int i = 1; i < size; i++) {
				if (arr[i] < min) {
					min = arr[i];
					pos = i;
				}
			}
		}

		return pos;
	}

    int max_pos(int* arr, int size) {
		int pos = -1;
		if (size > 0) {
			int max = arr[0];
			pos = 0;
			for (int i = 1; i < size; i++) {
				if (arr[i] > max) {
					max = arr[i];
					pos = i;
				}
			}
		}

		return pos;
	}

	int sum(int* arr, int size) {
		int s = 0;
		for (int i = 0; i < size; i++) {
			s += arr[i];
		}

		return s;
	}

	double avg(int* arr, int size) {
		int s = sum(arr, size);
		return s / (double)size;
	}

	int range(int* arr, int size) {
		return max(arr, size) - min(arr, size);
	}

    double variance(int* arr, int size) {
		int average = avg(arr, size);
		double s = 0;
		for (int i = 0; i < size; i++) {
			s += std::pow(arr[i] - average, 2);
		}

		return s / size;
	}

	double std_deviation(int* arr, int size) {
		return sqrt(variance(arr, size));
	}

    double median(int* arr, int size) {
		double m;	
		int* c = copy(arr, size);
		bubble_sort(c, size);
		if (size % 2 != 0) {
			m = arr[size / 2];
		} else {
			m = (arr[size / 2] + arr[size / 2 - 1]) / 2.0;
		}

		return m;
	}

	void scale(int* arr, int size, int value) {
		for (int i = 0; i < size; i++) {
			arr[i] *= value;
		}
	}
	
    double dot(int* arr1, int* arr2, int size) {
		double s = 0;
		for (int i = 0; i < size; i++) {
			s += arr1[i] * arr2[i];
		}
		return s;
	}

	double norm(int* arr, int size) {
		double norm = 0;
		for (int i = 0; i < size; i++) {
			norm += std::pow(arr[i], 2);
		}
		return std::sqrt(norm);
	}

	void normalize(int* arr, int size) {
		double n = norm(arr, size);
		if (n!= 0) {
			for (int i = 0; i < size; i++) {
				arr[i] /= n;
			}
		}
	}

	int* concatenate(int* arr1, int* arr2, int size1, int size2) {
		int* new_arr = new int[size1 + size2];
		int j = 0;
		for (int i = 0; i < size1; i++, j++) {
			new_arr[j] = arr1[i];
		}

		for (int i = 0; i < size2; i++, j++) {
			new_arr[j] = arr2[i];
		}

		return new_arr;
	}

	void add(int* arr1, int* arr2, int size1, int size2) {
		int min = (size1 < size2) ? size1 : size2;
		for (int i = 0; i < min; i++) { 
			arr1[i] += arr2[i];
		}
	}

    bool is_sorted(int* arr, int size) {
		bool sorted = true;
		for (int i = 0; sorted && i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				sorted = false;
			}
		}

		return sorted;
	}

    bool is_sorted_reversed(int* arr, int size) {
		bool sorted = true;
		for (int i = 0; sorted && i < size - 1; i++) {
			if (arr[i] < arr[i + 1]) {
				sorted = false;
			}
		}

		return sorted;
	}

    bool compare(int* arr1, int* arr2, int size1, int size2) {
		int result = 0;
		int i = 0;
		for (i = 0; result == 0 && i < size1 && i < size2; i++) {
			if (arr1[i] < arr2[i]) {
				result = -1;
			} else if (arr1[i] > arr2[i]) {
				result = 1;
			}
		}

		if (size1 < size2) {
			result = -1;
		} else if (size1 > size2) {
			result = 1;
		}

		return result;
	}

	void bubble_sort(int* arr, int size) {
		bool swaps = true;
		for (int i = 0; swaps && i < size - 1; i++) {
			swaps = false;
			for (int j = 0; j < size - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					swaps = true;
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}

	void print(int* arr, int size) {
		if (size > 0) {
			std::cout << "[";
			for (int i = 0; i < size - 1; i++) {
				std::cout << arr[i] << ", ";
			}
			std::cout << arr[size - 1] << "]" << std::endl;
		} else {
			std::cout << "[]" << std::endl;
		}
	}
}