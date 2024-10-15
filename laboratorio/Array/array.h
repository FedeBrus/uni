#ifndef ARRAY_H
#define ARRAY_H

namespace array {
	template <typename T> void print(T vector[], int size);
	template <typename T> void populate(T vetor[], int size, int min, int max);
	template <typename T> int norm(T vector[], int size);
	template <typename T> void normalize(T vector[], int size);
	template <typename T> double dot(T vector1[], T vector2[], int size);
}

#endif
