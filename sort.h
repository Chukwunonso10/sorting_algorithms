#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


/* Helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Main functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
size_t a_size(int *array);
void quick_sort(int *array, size_t size);
void qs(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, int size);
void shell_sort(int *array, size_t size);
void s_sort(int *array, int size, int n);
#endif /* SORT_H */
