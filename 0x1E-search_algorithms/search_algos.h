#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int print_array(int *array, size_t size, size_t left, size_t right, int value);

#endif
