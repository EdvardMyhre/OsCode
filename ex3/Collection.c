#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Collection.h"



struct Collection* createCollection(void)
{
    struct Collection *c = malloc(sizeof(struct Collection));
    assert(c != NULL);
    c->elements = malloc(sizeof(int) * N);
    c->size = N;
    c->used = 0;
    return c;
}

void push(int element, struct Collection *c)
{
    if (c->used >= c->size)
    {
        c->elements = realloc(c->elements, sizeof(int) * (c->size + N));
        assert(c != NULL);
        c->size += N;
    }
    c->elements[c->used] = element;
    c->used++;
}

void pop(struct Collection *c)
{
    if (c->used > 0)
    {
        c->used--;
    }
}

void print(struct Collection *c)
{
    int first = 1;
    int i;
    for (i = 0; i < c->used; i++)
    {
        if (!first)
        {
            printf(",");
        }
        first = 0;

        printf("%d", c->elements[i]);
    }
    printf("\n");
}
