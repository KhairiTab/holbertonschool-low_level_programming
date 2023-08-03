#include <stdlib.h>
#include <string.h>

list_t *add_node_end(list_t **head, const char *str) {
    // Allocate memory for the new node
    list_t *new_node = (list_t *)malloc(sizeof(list_t));
    if (new_node == NULL) {
        // Memory allocation failed
        return NULL;
    }

    // Duplicate the input string
    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        // Memory allocation for the string failed
        free(new_node);
        return NULL;
    }

    // Calculate the length of the new string
    new_node->len = strlen(str);

    // Set the next pointer of the new node to NULL as it will be the last node
    new_node->next = NULL;

    // If the list is empty, set the new node as the head
    if (*head == NULL) {
        *head = new_node;
    } else {
        // Traverse to the last node and update its next pointer to the new node
        list_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }

    return new_node;
}
