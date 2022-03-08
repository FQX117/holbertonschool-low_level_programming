#ifndef _LISTS_H_
#define _LISTS_H_
/** Headers **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/** prototypes **/
/*
*/typedef struct list_s
{
	char *str;
	unsigned int x;
	struct list_s *n;
} list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);
int _strlen(const char *s);
#endif
