#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

unsigned long int hash_djb2(const unsigned char *str) 
{
    unsigned long int hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return (hash);
}

unsigned long int key_index(const unsigned char *key, unsigned long int size) 
{
    unsigned long int hash = hash_djb2(key);
    unsigned long int index = hash % size;
    return (index);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value) 
{
    if (key == NULL || strlen(key) == 0)
        return (0);

    unsigned long int index = key_index((const unsigned char *)key, ht->size);

    hash_node_t *node = ht->array[index];
    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            free(node->value);
            node->value = strdup(value);
            return (1);
        }
        node = node->next;
    }

    hash_node_t *newNode = malloc(sizeof(hash_node_t));
    if (newNode == NULL)
        return (0);

    newNode->key = strdup(key);
    newNode->value = strdup(value);
    newNode->next = ht->array[index];
    ht->array[index] = newNode;

    return (1);
}
