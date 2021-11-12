#include <stdbool.h>
#include <stdlib.h>

typedef struct element *list;
struct element
{
    int value;
    list next;
};

// 1a
void append(list *lp, int n)
{
    list temp = (list) *lp;
    while (true)
    {
        if (temp->next == NULL)
            break;
        temp = temp->next;
    }
    temp->next = (list) malloc(sizeof(list));
    temp->value = n;
}

int main(int argc, char const *argv[])
{
    list e = (list) malloc(sizeof(list));
    append(&e, 4);
    append(&e, 2);
    append(&e, 0);

    return 0;
}
