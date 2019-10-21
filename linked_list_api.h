#ifndef _DOUBLY_LIST
#define _DOUBLY_LIST

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <memory.h>

typedef struct node {
    void *data;
    struct node *next;
    struct node *prev;
} node_t;

/**
 * create_node - Allocate memory for a new node.
 *
 * @data: data for new node
 *
 * Create a new node with @data and return pointer node_t* to new node.
 */
node_t *create_node(void *data);

#endif