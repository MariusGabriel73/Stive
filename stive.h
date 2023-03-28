#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Node{
	char val;
	struct Node *next;
}Node;

typedef char Data;

char top(Node *top);
void push(Node**top, Data v);
char pop(Node**top);
int isEmpty(Node*top);
void deleteStack(Node**top);
