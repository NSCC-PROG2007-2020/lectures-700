#include <stdio.h>
#include <stdlib.h>

struct node {

    int num;
    struct node *next;

};

struct node *first = NULL;

void add(int num) {

    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->num = num;
    new_node->next = NULL;

    struct node *prev_node = NULL;
    struct node *next_node = first;
    while(next_node != NULL) {
        prev_node = next_node;
        next_node = next_node->next;
    }
    if (prev_node == NULL) {
        first = new_node;
    } else {
        prev_node->next = new_node;
    }
}

void print_list() {
    struct node *node = first;
    while(node != NULL) {
        printf("%i ", node->num);
        node = node->next;
    }
}

void delete_list() {
    struct node *temp;
    struct node *node = first;
    /* navigate through the linked list deleting each
     * node as you go.
     */
    while(node != NULL) {
        temp = node;
        node = node->next;
        free(temp);
    }
}

int main() {

    /*
    struct node n2 = { 2, NULL };
    struct node n1 = { 1, &n2 };

    struct node *node_ptr = &n1;

    printf("%i\n", node_ptr->num);

    node_ptr = n1.next;

    printf("%i\n", node_ptr->num);
    */

    add(1);
    add(2);
    add(3);
    add(4);
    add(5);

    print_list();

    delete_list();

    return 0;
}
