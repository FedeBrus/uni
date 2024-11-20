#ifndef ARRAY_H
#define ARRAY_H

namespace array {
    int* create(int size);
    int* create(int size, int value);
    void initialize(int* arr, int size, int value);
    void resize(int*& arr, int size, int new_size);

    int get(int* arr, int size, int pos);
    void set(int* arr, int size, int pos, int value);

    void swap(int* arr, int size, int a, int b);
    void shift_left(int* arr, int size, int n);
    void shift_right(int* arr, int size, int n);
    void rotate_left(int* arr, int size, int n);
    void rotate_right(int* arr, int size, int n);
    void reverse(int* arr, int size);
    void reverse(int* arr, int size, int a, int b);

    int* copy(int* arr, int size);
    int* copy(int* arr, int size, int a, int b);

    int linear_search(int* arr, int size, int target);
    int binary_search(int* arr, int size, int target);
    int min(int* arr, int size);
    int max(int* arr, int size); 
    int min_pos(int* arr, int size);
    int max_pos(int* arr, int size); 

    int sum(int* arr, int size);
    double avg(int* arr, int size);
    int range(int* arr, int size);
    double variance(int* arr, int size);
    double std_deviation(int* arr, int size);
    double median(int* arr, int size);

    void scale(int* arr, int size, int value);
    double dot(int* arr1, int* arr2, int size1, int size2);
    double norm(int* arr, int size);
    void normalize(int* arr, int size);
    int* concatenate(int* arr1, int* arr2, int size1, int size2);
    void add(int* arr1, int* arr2, int size1, int size2);

    bool is_sorted(int* arr, int size);
    bool is_sorted_reversed(int* arr, int size);
    bool compare(int* arr1, int* arr2, int size1, int size2);

    void bubble_sort(int* arr, int size);

    void print(int* arr, int size);
}

#endif
