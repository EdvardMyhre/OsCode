
#define N 2

struct Collection
{
    int *elements;
    int size;
    int used;
};

struct Collection* createCollection(void);

void push(int element, struct Collection *c);

void pop(struct Collection *c);

void print(struct Collection *c);
