#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
#endif /*  DOUBLY LINKED LIST */
