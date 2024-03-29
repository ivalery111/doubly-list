#ifndef _DOUBLY_LIST
#define _DOUBLY_LIST

#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/**
 * add_prev - Add new node to the left of the list
 *
 * @current: node to which add new node
 * @new_node: new node that need to add
 *
 */
void add_prev(node_t *current, node_t *new_node);

/**
 * add_to_end - Add @new_node to the end of the list
 *
 * @begin: begin point of the list
 * @new_node: node to add
 */
void add_to_end(node_t **begin, node_t *new_node);

/**
 * find_node - find node in list with @data value
 * 
 * @begin: begin point of the list
 * @data: data to search
 */
node_t *find_node(node_t **begin, void *data);
#endif