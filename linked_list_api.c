#include "linked_list_api.h"

node_t *create_node(void *data) {
    if (data == NULL) {
        perror("data is NULL");
        exit(EXIT_FAILURE);
    }

    node_t *new_node = malloc(sizeof(node_t));

    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;

    return new_node;
}

void add_prev(node_t *current, node_t *new_node) {

    if (current != NULL && new_node != NULL) {
        new_node->next = current;
        new_node->prev = current->prev;

        current->prev = new_node;
        if (new_node->prev != NULL)
            new_node->prev->next = new_node;
    }
}

void add_to_end(node_t **list, node_t *new_node) {

    if (*list == NULL) {
        *list = new_node;
        new_node->prev = NULL;
        return;
    }

    node_t *current = *list;

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = new_node;
    new_node->prev = current;
}

node_t *find_node(node_t **begin, void *data) {

    if (*begin == NULL)
        return NULL;

    node_t *current = *begin;

    while (current != NULL) {
        if (current->data == data) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}