#ifndef _hash_tables_H_
#define _hash_tables_H_
#include<stdio.h>

typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

#endif
