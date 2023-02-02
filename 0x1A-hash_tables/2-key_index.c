#include "hash_tables.h"

/**
 * int key_index: a function that gives you the index of a key.
 * @key - Key
 * @size - size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the
 *  array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

