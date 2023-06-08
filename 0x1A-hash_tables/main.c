#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    //ht = hash_table_create(1024);
    ht = NULL;
    int a;
    a = hash_table_set(ht, "hetairas", "cool");
    int b;
    b = hash_table_set(ht, "heas", "");
    printf("%d ----- %d", a, b);
    return (EXIT_SUCCESS);
}
