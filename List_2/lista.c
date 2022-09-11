#include <stdio.h>
#include <stdlib.h>

typedef struct element
{
    int value;
    struct element *next;
    
} no;

typedef struct control
{
    no *start;
    no *final;
    int size;
} t_list;

void initializes(t_list *list)
{
    list->start = NULL;
    list->final = NULL;
    list->size = 0;
}

int insert_start(t_list *list, int value)
{
    no *new;

    new = (no*)malloc(sizeof(no));
    if ((*new == NULL)
        return -1;
    new->value = value;

    if (list->start == NULL)
    {
        new->next = NULL;
        list->start = new;
        list->final = new;
    }
    else{
        new->next = list->start;
        list->start = new;
    }
    list->size++;
    return (0);
}

int insert_final(t_list *list, int value)
{
    no *new;

    new = (no*)malloc(sizeof(no));
    if ((*new == NULL)
        return -1;
    new->value = value;
    new->next = NULL;

    if (list->start == NULL)
    {
        list->start = new;
        list->final = NULL;
    }
    else
    {
        list->final->next = new;
        list->final = new;
    }
    list->size++;
    return (0);
}

