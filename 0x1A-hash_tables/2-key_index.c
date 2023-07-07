#include "hash_tables.h"

/*
 * key - the value
 *
 * size - tne memory to allocate
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash = hash_djb2(key);
    unsigned long int index = hash % size;
    return index;
}
