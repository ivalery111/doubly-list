#ifndef _DOUBLY_LIST
#define _DOUBLY_LIST

typedef struct node{
    void* data;
    struct node* next;
    struct node* prev;
}node_t;

#endif