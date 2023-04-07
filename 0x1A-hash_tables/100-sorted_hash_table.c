#include "hash_tables.h"

/**
* shash_table_create - creates a hash table
* @size: size of the array of linked list in the table
*
* Return: shash_table_t struc
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *sht;

if (size == 0)
return (NULL);
sht = calloc(1, sizeof(shash_table_t));

if (!sht)
return (NULL);
sht->size = size;
sht->array = calloc((size_t)sht->size, sizeof(shash_node_t *));

if (sht->array == NULL)
{
free(sht);
return (NULL);
}
return (sht);
}
/**
* shash_table_set - adds an element to the hash table
* @ht: hash table to add the element to
* @key: key of the element, will give the index in the array
* @value: value of the element to store in the array
*
* Return: 1 on success, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;

shash_node_t *new;
if (!ht || !key || !strcmp(key, "") || !value)
return (0);
index = key_index((unsigned char *)key, ht->size);

if (check_key_s(ht->array[index], key))
return (replace_value_s(&ht->array[index], key, value));
new = add_node_s(&ht->array[index], key, value);
if (!new)
return (0);
insert_sort(new, ht);
return (1);
}

