#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct stack_node
{
    int value ;
    struct stack_node * next ;
};
typedef struct stack_node stack_node;
struct stack
{
    stack_node * head ;
    int size ;
};
typedef struct stack stack ;

stack * create_stack()
{
    stack * s = (stack *) malloc(sizeof(stack));
    s->size = 0 ;
    s->head = NULL ;
    return s ;
}

bool empty_Stack(stack * s )
{
    //this is correct
    return s->size == 0 ;
}


void push(stack * s ,int value)
{
    stack_node * n = (stack_node * )malloc(sizeof(stack_node));
    n->value = value ;
    n->next = s->head;
    s->head = n ;
    s->size++ ;
}

int pop_stack(stack * s)
{

    if(!empty_Stack(s)){
        int value = s->head->value ;
        stack_node *sn = s->head ;
        s->head = s->head->next ;
        free(sn);
        s->size--;
        return value ;
    }
    else{
        return -1 ;
    }
}

int main()
{

    stack * s = create_stack();
    push(s,5);
    push(s,9);
    push(s,3);
    while(!empty_Stack(s)){
        printf("%d\t",pop_stack(s));
    }

    return 0 ;
}
