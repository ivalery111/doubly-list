#include <assert.h>

#include "linked_list_api.h"

void test_create_node() {

    int a = 5;
    node_t *node_a = create_node(&a);

    /* SO link about casting:
     * https://stackoverflow.com/questions/16016920/type-casting-integer-to-void
     */
    assert(*((int *)node_a->data) == a); 

    char c = 'q';
    node_t * node_c = create_node(&c);
    assert(*((char *)node_c->data) == c );

    char *str_b = "b";
    node_t *node_b = create_node(str_b);
    assert(*((char *)node_b->data) == *str_b);

    printf("test_create_node done!\n");
}

int main(void) {
    test_create_node();
}