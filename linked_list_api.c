#include "linked_list_api.h"

node_t *create_node(void *data) {
    if(data == NULL){
        perror("data is NULL");
        exit(EXIT_FAILURE);
    }

    node_t *new_node = malloc(sizeof(node_t));

    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;

    return new_node;
}